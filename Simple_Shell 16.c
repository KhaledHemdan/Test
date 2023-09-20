#include "simpleshell.h"
char *hat_tareekh(info_t *info)
{
	char *buf; 
	char *dir;
	dir = _fahatbeaa(info, "HOME=");
	if (!dir)
		return (NULL);
	buf = malloc(sizeof(char) * (_strtole(dir) + _strtole(MALAF_HOSTO) + 2));
	if (!buf)
		return (NULL);
	buf[0] = 0;
	_strnoskha(buf, dir);
	_strdamg(buf, "/");
	_strdamg(buf, MALAF_HOSTO);
	return (buf);
}
int ikteb_tareekh(info_t *info)
{
	ssize_t fd;
	char *filename = hat_tareekh(info);
	list_t *node = NULL;
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(filename);
	if (fd == -1)
		return (-1);
	for (node = info->history; node; node = node->next)
	{
		_fahotxxifede(node->str, fd);
		_fahotifede('\n', fd);
	}
	_fahotifede(FKOSHY_BBUF, fd);
	close(fd);
	return (1);
}
int iqraa_tareekh(info_t *info)
{
	int i; 
	int last = 0; 
	int linecount = 0;
	ssize_t fd; 
	ssize_t rdlen; 
	ssize_t fsize = 0;
	struct stat st;
	char *buf = NULL; 
	char *filename = hat_tareekh(info);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	free(filename);
	if (fd == -1)
		return (0);
	if (!fstat(fd, &st))
		fsize = st.st_size;
	if (fsize < 2)
		return (0);
	buf = malloc(sizeof(char) * (fsize + 1));
	if (!buf)
		return (0);
	rdlen = read(fd, buf, fsize);
	buf[fsize] = 0;
	if (rdlen <= 0)
		return (free(buf), 0);
	close(fd);
	for (i = 0; i < fsize; i++)
		if (buf[i] == '\n')
		{
			buf[i] = 0;
			ebni_tareekh(info, buf + last, linecount++);
			last = i + 1;
		}
	if (last != i)
		ebni_tareekh(info, buf + last, linecount++);
	free(buf);
	info->histcount = linecount;
	while (info->histcount-- >= MALAF_HOSTO_MAX)
		imsah_node(&(info->history), 0);
	raqam_tareekh(info);
	return (info->histcount);
}
int ebni_tareekh(info_t *info, char *buf, int linecount)
{
	list_t *node = NULL;
	if (info->history)
		node = info->history;
	dif_node_end(&node, buf, linecount);
	if (!info->history)
		info->history = node;
	return (0);
}
int raqam_tareekh(info_t *info)
{
	list_t *node = info->history;
	int i = 0;
	while (node)
	{
		node->num = i++;
		node = node->next;
	}
	return (info->histcount = i);
}