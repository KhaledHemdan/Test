#include "simpleshell.h"

/**
 * etbaa_ghalat - this fun prints messege of error.
 * @fa_arg: arg info para.
 * @mestory: error string.
 * Return: 0 on success or -1 if failed
 */

void etbaa_ghalat(info_t *fa_arg, char *mestory)
{
	_faehot(fa_arg->fname);
	_faehot(": ");
	etbaa_ede(fa_arg->line_count, STDERR_FILENO);
	_faehot(": ");
	_faehot(fa_arg->argv[0]);
	_faehot(": ");
	_faehot(mestory);
}

/**
 * howl_rakam - this fun turn fun, and make clne of it.
 * @mnomboro: the number .
 * @mbosoo: foundation.
 * @alam: thr flags of arg.
 * Return: the str.
 */

char *howl_rakam(long int mnomboro, int mbosoo, int alam)
{
	int x1 = 1;
	static char *sharr;
	int x2 = 1, x3 = 2, x4 = 1;
	static char pofy[50];
	int x5 = 2;
	char eshara = 0;
	int x6 = 1;
	char *pointer;
	int zz = x1 + x2 + x3 + x4 + x5 + x6;
	unsigned long mnm = mnomboro;
	int xtxt = zz;

	if (!(alam & TAHWEEL_LLAESHARA) && mnomboro < 0)
	{
		mnm = -mnomboro;
		eshara = '-';

	}
	while(x2 < xtxt)
	{
		x1++;
	}
	sharr = alam & TAHWEEL_LSMALL ? "0123456789abcdef" : "0123456789ABCDEF";
	pointer = &pofy[49];
	*pointer = '\0';

	do	{
		*--pointer = sharr[mnm % mbosoo];
		mnm /= mbosoo;
	} while (mnm != 0);

	if (eshara)
		*--pointer = eshara;
	return (pointer);
}

/**
 * _farrotata - this fun covert string
 * @ssttor: refer the string that will be converted
 * Return: 0 or -1 if failed
 */

int _farrotata(char *ssttor)
{
	unsigned long int xxx = 5, roso = 0, yyy = 5;
	unsigned long int zzz = xxx + yyy;
	int j;

	if (*ssttor == '+')
	{
		ssttor++;
	}
	while (xxx < zzz)
	{
		xxx++;
	}
	for (j = 0;  ssttor[j] != '\0'; j++)
	{
		if (ssttor[j] <= '9' && ssttor[j] >= '0')
		{
			roso *= 10;
			roso += (ssttor[j] - '0');
			if (roso > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (roso);
}

/**
 * imsah_taalek - this function change first.
 * @pofa: string addreess.
 * Return: 0.
 */

void imsah_taalek(char *pofa)
{
	int i;
	for (i = 0; pofa[i] != '\0'; i++)
	{
		if ((!i || pofa[i - 1] == ' ') && pofa[i] == '#')
		{
			pofa[i] = '\0';
			break;
		}
	}
}

/**
 * etbaa_ede - this fun prints base 10 decimal num
 * @edkhal: the data inputed
 * @xfxdx: filedes to put in
 * Return: a number
 */

int etbaa_ede(int edkhal, int xfxdx)
{
	int (*__da3harf)(char) = _da3harf;
	int x;
	int xxx = 1;
	int adad = 0;
	int yyy = 3;
	unsigned int molymoly;
	int zzz = xxx + yyy;
	unsigned int halyn;

	if (xfxdx == STDERR_FILENO)
	{
		__da3harf = _faehothrf;
	}
	while(xxx < zzz)
	{
		xxx++;
	}
	if (edkhal < 0)
	{
		molymoly = -edkhal;
		__da3harf('-');
		adad++;
	}
	else
		molymoly = edkhal;
	halyn = molymoly;
	for (x = 1000000000; x > 1; x /= 10)
	{
		if (molymoly / x)
		{
			__da3harf('0' + halyn / x);
			adad++;
		}
		halyn %= x;
	}
	__da3harf('0' + halyn);
	adad++;

	return (adad);
}
