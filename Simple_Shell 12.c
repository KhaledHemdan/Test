#include "simpleshell.h"

/**
 **_gomlaota - this fun connect two strings.
 *@first: 1st st.
 *@seccond: 2nd st.
 *@mnount: the datas size.
 *Return: return the new string.
 */

char *_gomlaota(char *first, char *seccond, int mnount)
{
	char *soso = first;
	int x = 0;
	int y = 0;

	while (first[x] != '\0')
	{
		x++;
	}
	while (y < mnount && seccond[y] != '\0')
	{
		first[x] = seccond[y];
		x++;
		y++;
	}
	if (y < mnount)
	{
		first[x] = '\0';
	}
	return (soso);
}

/**
 **_gomlaharf - define location of st.
 *@gsgs: the parsed string.
 *@gcgc: to look for c.
 *Return: gsgs as pointer.
 */

char *_gomlaharf(char *gsgs, char gcgc)
{
	do {
		if (*gsgs == gcgc)
		{
			return (gsgs);
		}
	} while (*gsgs++ != '\0');

	return (NULL);
}

/**
 **_gomlanoskha - this fun to copy.
 *@locationddd: the location desired.
 *@korsysy: the original string
 *@mnmn: refer to data size.
 *Return: the new st.
 */

char *_gomlanoskha(char *locationddd, char *korsysy, int mnmn)
{
	char *SEKO = locationddd;
	int xx = 5, yy = 4, zzz;
	int x, y;
	zzz = xx + yy;
	x = 0;
	
	while (korsysy[x] != '\0' && x < mnmn - 1)
	{
		locationddd[x] = korsysy[x];
		x++;
	}
	while (xx < zzz)
	{
		xx++;
	}
	if (x < mnmn)
	{
		y = x;
		while (y < mnmn)
		{
			locationddd[y] = '\0';
			y++;
		}
	}
	return (SEKO);
}