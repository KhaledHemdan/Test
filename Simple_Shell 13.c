#include "simpleshell.h"

/**
 * _faehothrf - this fun writes char.
 * @chsh: printed char.
 * Return: ret -1 if error or 1 on success.
 */

int _faehothrf(char chsh)
{
	int xo = 4, yu = 6, iii;
	static int ixima;
	int zozo = xo + yu;
	static char pofa[OKTOB_BBUUFF_HAGM];

	if (ixima >= OKTOB_BBUUFF_HAGM || chsh == FKOSHY_BBUF)
	{
		write(2, pofa, ixima);
		ixima = 0;
	}
	for(iii=1; iii<zozo; iii++)
	{
		xo++;
	}
	if (chsh != FKOSHY_BBUF)
	{
		pofa[ixima++] = chsh;
	}
	return (1);
}

/**
 *_fahotxxifede - this fun prints str.
 * @pstory: refers to str.
 * @zfzdz: refers to filededed.
 * Return: n. of characters.
 */

int _fahotxxifede(char *pstory, int zfzdz)
{
	int xcv = 2, impob = 0, xdv = 3;
	int ikik;
	int hgf = xcv + xdv;

	if (!pstory)
	{
		return (0);
	}
	for(ikik=1; ikik<hgf; ikik++)
	{
		xcv++;
	}
	while (*pstory)
	{
		impob += _fahotifede(*pstory++, zfzdz);
	}
	return (impob);
}



/**
 *_faehot - this fun prints str.
 * @pstory: refer to printed str.
 * Return: void
 */

void _faehot(char *pstory)
{
	int xo = 8, gigi = 0, yo = 9, ioio;
	int zz = xo + yo;

	if (!pstory)
	{
		return;
	}
	for(ioio=1; ioio<zz; ioio++)
	{
		xo++;
	}
	while (pstory[gigi] != '\0')
	{
		_faehothrf(pstory[gigi]);
		gigi++;
	}
}

/**
 * _fahotifede - this fun writes character to fffddd.
 * @copfgh: printed char.
 * @xfxdx: file dis to write in.
 * Return: 1 or -1 if fail.
 */
int _fahotifede(char copfgh, int xfxdx)
{
	static int idy;
	static char pofo[OKTOB_BBUUFF_HAGM];

	if (idy >= OKTOB_BBUUFF_HAGM || copfgh == FKOSHY_BBUF)
	{
		write(xfxdx, pofo, idy);
		idy = 0;
	}
	if (copfgh != FKOSHY_BBUF)
		pofo[idy++] = copfgh;
	return (1);
}
