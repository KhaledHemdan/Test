#include "simpleshell.h"
char *_strnoskha(char *dest, char *src)
{
	int i = 0;
	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
char *_strkarr(const char *str)
{
	int length = 0;
	char *ret;
	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
void _da3(char *str)
{
	int i = 0;
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_da3harf(str[i]);
		i++;
	}
}
int _da3harf(char c)
{
	static int i;
	static char buf[OKTOB_BBUUFF_HAGM];
	if (c == FKOSHY_BBUF || i >= OKTOB_BBUUFF_HAGM)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != FKOSHY_BBUF)
		buf[i++] = c;
	return (1);
}