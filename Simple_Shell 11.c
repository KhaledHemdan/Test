#include "simpleshell.h"
int hal_cmd(info_t *info, char *path)
{
	struct stat st;
	(void)info;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}
char *dup_harf(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int i = 0; 
	int k = 0;
	for (k = 0, i = start; i < stop; i++)
		if (pathstr[i] != ':')
			buf[k++] = pathstr[i];
	buf[k] = 0;
	return (buf);
}
char *bahth_tareeq(info_t *info, char *pathstr, char *cmd)
{
	int i = 0; 
	int curr_pos = 0;
	char *path;
	if (!pathstr)
		return (NULL);
	if ((_strtole(cmd) > 2) && bedaya_b(cmd, "./"))
	{
		if (hal_cmd(info, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!pathstr[i] || pathstr[i] == ':')
		{
			path = dup_harf(pathstr, curr_pos, i);
			if (!*path)
				_strdamg(path, cmd);
			else
			{
				_strdamg(path, "/");
				_strdamg(path, cmd);
			}
			if (hal_cmd(info, path))
				return (path);
			if (!pathstr[i])
				break;
			curr_pos = i;
		}
		i++;
	}
	return (NULL);
}