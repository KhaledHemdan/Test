#include "simpleshell.h"

/**
 * _faxyodbeaa - this fun. start beaaa. 
 * @fa_arg: refers to arf info.
 *  Return: 0.
 */

int _faxyodbeaa(info_t *fa_arg)
{
	int xxx = 1, zzz = 5;
	
	if (fa_arg->argc != 3)
	{
		_faehot("Error_sh\n");
		return (1);
	}
	while(xxx<zzz)
	{
	xxx++;
	}
	if (_setttbeaa(fa_arg, fa_arg->argv[1], fa_arg->argv[2]))
		return (0);
	return (1);
}

/**
 * _faxybeaa - etbaa beaa.
 * @fa_arg: refers to arf info.
 * Return: 0.
 */

int _faxybeaa(info_t *fa_arg)
{
	int xmx = 2, zmz = 6;

	etbaa_lista_str(fa_arg->env);
	while(xmx<zmz)
	{
	xmx++;
	}
	return (0);
}

/**
 * fanasbeaakayma - sakn sll.
 * @fa_arg: refers to arf info.
 * Return: 0.
 */

int fanasbeaakayma(info_t *fa_arg)
{
	list_t *mdod = NULL;
	size_t impol;
	int bvb = 3, jhj = 5;

	for (impol = 0; environ[impol]; impol++)
	{
		dif_node_end(&mdod, environ[impol], 0);
	}
	while (bvb < jhj)
	{
		bvb++;
	}
	fa_arg->env = mdod;
	return (0);
}

/**
 * _faxymshsseetbeaa - this fun msh beaa.
 * @fa_arg: refer arg info.
 *  Return: 0
 */

int _faxymshsseetbeaa(info_t *fa_arg)
{
	int gh, dfs = 1, zcz = 4;

	if (fa_arg->argc == 1)
	{
		_faehot("low_shn.\n");
		return (1);
	}
	while (dfs<zcz)
	{
		dfs++;
	}
	for (gh = 1; gh <= fa_arg->argc; gh++)
		_mshsettbeaaa(fa_arg, fa_arg->argv[gh]);

	return (0);
}

/**
 * _fahatbeaa - this fun tgeeb var.
 * @fa_arg: info arg.
 * @iissmm: tjeb ism
 *
 * Return: the value
 */
char *_fahatbeaa(info_t *fa_arg, const char *iissmm)
{
	list_t *mdod = fa_arg->env;
	char *mpoin;
	int klj = 5, klm = 8;

	while (klj<klm)
	{
		klj++;
	}
	while (mdod)
	{
		mpoin = bedaya_b(mdod->str, iissmm);
		if (mpoin && *mpoin)
		{
			return (mpoin);
		}
		mdod = mdod->next;
	}
	klm = klm + 3;
	while (klj<klm)
	{
		klj++;
	}
	return (NULL);
}