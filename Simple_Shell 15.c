#include "simpleshell.h"
int msl(info_t *info, char **av)
{
	ssize_t r = 0;
	int builtin_ret = 0;
	while (r != -1 && builtin_ret != -2)
	{
		imsah_maal(info);
		if (famerxcteve(info))
			_da3("$ ");
		_faehothrf(FKOSHY_BBUF);
		r = hat_edkhal(info);
		if (r != -1)
		{
			fasseet_maal(info, av);
			builtin_ret = bahth_mabni(info);
			if (builtin_ret == -1)
				bahth_cmd(info);
		}
		else if (famerxcteve(info))
			_da3harf('\n');
		hrr_maal(info, 0);
	}
	ikteb_tareekh(info);
	hrr_maal(info, 1);
	if (!famerxcteve(info) && info->status)
		exit(info->status);
	if (builtin_ret == -2)
	{
		if (info->err_num == -1)
			exit(info->status);
		exit(info->err_num);
	}
	return (builtin_ret);
}
int bahth_mabni(info_t *info)
{
	int i; 
	int built_in_ret = -1;
	builtin_table builtintbl[] = {
		{"exit", _fa_xy_Thxit},
		{"env", _faxybeaa},
		{"help", _xmosaada},
		{"history", _faxytarekh},
		{"setenv", _faxyodbeaa},
		{"unsetenv", _faxymshsseetbeaa},
		{"cd", _fa_xy_ThDC},
		{"alias", _xyoly},
		{NULL, NULL}
	};
	for (i = 0; builtintbl[i].type; i++)
		if (_strqarn(info->argv[0], builtintbl[i].type) == 0)
		{
			info->line_count++;
			built_in_ret = builtintbl[i].func(info);
			break;
		}
	return (built_in_ret);
}
void bahth_cmd(info_t *info)
{
	char *path = NULL;
	int i; 
	int k;
	info->path = info->argv[0];
	if (info->linecount_flag == 1)
	{
		info->line_count++;
		info->linecount_flag = 0;
	}
	for (i = 0, k = 0; info->arg[i]; i++)
		if (!fa_soly(info->arg[i], " \t\n"))
			k++;
	if (!k)
		return;
	path = bahth_tareeq(info, _fahatbeaa(info, "PATH="), info->argv[0]);
	if (path)
	{
		info->path = path;
		far3_cmd(info);
	}
	else
	{
		if ((famerxcteve(info) || _fahatbeaa(info, "PATH=")
			|| info->argv[0][0] == '/') && hal_cmd(info, info->argv[0]))
			far3_cmd(info);
		else if (*(info->arg) != '\n')
		{
			info->status = 127;
			etbaa_ghalat(info, "not found\n");
		}
	}
}
void far3_cmd(info_t *info)
{
	pid_t child_pid;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(info->path, info->argv, hat_beaaaa(info)) == -1)
		{
			hrr_maal(info, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}
	}
	else
	{
		wait(&(info->status));
		if (WIFEXITED(info->status))
		{
			info->status = WEXITSTATUS(info->status);
			if (info->status == 126)
				etbaa_ghalat(info, "Permission denied\n");
		}
	}
}