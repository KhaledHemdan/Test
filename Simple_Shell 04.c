#include "simpleshell.h"
int hal_chain(info_t *info, char *buf, size_t *p)
{
	size_t j = *p;
	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = RORO_DCM;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = DMD_WWWW;
	}
	else if (buf[j] == ';') 
	{
		buf[j] = 0; 
		info->cmd_buf_type = SOLSALA;
	}
	else
		return (0);
	*p = j;
	return (1);
}
void fahs_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;
	if (info->cmd_buf_type == DMD_WWWW)
	{
		if (info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (info->cmd_buf_type == RORO_DCM)
	{
		if (!info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	*p = j;
}
int tabdel_chain(info_t *info)
{
	int i;
	list_t *node;
	char *p;
	for (i = 0; i < 10; i++)
	{
		node = node_bedaya_b(info->alias, info->argv[0], '=');
		if (!node)
			return (0);
		free(info->argv[0]);
		p = _gomlaharf(node->str, '=');
		if (!p)
			return (0);
		p = _strkarr(p + 1);
		if (!p)
			return (0);
		info->argv[0] = p;
	}
	return (1);
}
int tabdel_vars(info_t *info)
{
	int i = 0;
	list_t *node;
	for (i = 0; info->argv[i]; i++)
	{
		if (info->argv[i][0] != '$' || !info->argv[i][1])
			continue;
		if (!_strqarn(info->argv[i], "$?"))
		{
			tabdel_gomla(&(info->argv[i]),
				_strkarr(howl_rakam(info->status, 10, 0)));
			continue;
		}
		if (!_strqarn(info->argv[i], "$$"))
		{
			tabdel_gomla(&(info->argv[i]),
				_strkarr(howl_rakam(getpid(), 10, 0)));
			continue;
		}
		node = node_bedaya_b(info->env, &info->argv[i][1], '=');
		if (node)
		{
			tabdel_gomla(&(info->argv[i]),
				_strkarr(_gomlaharf(node->str, '=') + 1));
			continue;
		}
		tabdel_gomla(&info->argv[i], _strkarr(""));
	}
	return (0);
}
int tabdel_gomla(char **old, char *new)
{
	free(*old);
	*old = new;
	return (1);
}