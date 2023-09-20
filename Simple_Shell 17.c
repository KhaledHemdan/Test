#include "simpleshell.h"

/**
 * _mshsettbeaaa - this fun clear envir.
 * @fa_arg: arg info
 * @fa_avory: the variable
 *  Return: on suc 1 or 0 on error
 */

int _mshsettbeaaa(info_t *fa_arg, char *fa_avory)
{
	int hhh1 = 1;
	size_t gfii = 0;
	int hhh2 = 2;
	list_t *mdod = fa_arg->env;
	int hhh3 = 2;
	char *zozop;
	int hhht = hhh1 + hhh2 + hhh3;

	if (!fa_avory || !mdod)
	{
		return (0);
	}
	while (hhh1<hhht)
	{
		hhh1++;
	}
	while (mdod)
	{
		zozop = bedaya_b(mdod->str, fa_avory);
		if (*zozop == '=' && zozop)
		{
			fa_arg->env_changed = imsah_node(&(fa_arg->env), gfii);
			gfii = 0;
			mdod = fa_arg->env;
			continue;
		}
		mdod = mdod->next;
		gfii++;
	}
	hhht = hhht + 2;
	while (hhh1<hhht)
	{
		hhh1++;
	}
	return (fa_arg->env_changed);
}


/**
 * _setttbeaa - this fun
 * @fa_arg: arg info
 * @hagor: the v
 * @mfr: the r
 *  Return: 0
 */

int _setttbeaa(info_t *fa_arg, char *hagor, char *mfr)
{
	int ghgh1 = 1;
	list_t *mdod;
	int ghgh2 = 2;
	char *fgfgfg;
	int ghgh3 = 1;
	char *popof = NULL;
	int ghght = ghgh1 + ghgh2 + ghgh3;
	
	ghght = ghght + 2;
	while (ghgh1 < ghght)
	{
		ghgh1++;
	}
	if (!mfr || !hagor)
	{
		return (0);
	}
	ghght = ghght + 2;
	while (ghgh1 < ghght)
	{
		ghgh1++;
	}
	popof = malloc(_strtole(hagor) + _strtole(mfr) + 2);
	if (!popof)
	{
		return (1);
	}
	_strnoskha(popof, hagor);
	_strdamg(popof, "=");
	ghght = ghght + 2;
	while (ghgh1 < ghght)
	{
		ghgh1++;
	}
	_strdamg(popof, mfr);
	mdod = fa_arg->env;
	while (mdod)
	{
		fgfgfg = bedaya_b(mdod->str, hagor);
		if (fgfgfg && *fgfgfg == '=')
		{
			free(mdod->str);
			mdod->str = popof;
			fa_arg->env_changed = 1;
			return (0);
		}
		mdod = mdod->next;
	}
	dif_node_end(&(fa_arg->env), popof, 0);
	free(popof);
	ghght = ghght + 2;
	while (ghgh1 < ghght)
	{
		ghgh1++;
	}
	fa_arg->env_changed = 1;
	return (0);
}

/**
 * hat_beaaaa - this fun
 * @fa_arg: arg of info
 * Return: 0
 */

char **hat_beaaaa(info_t *fa_arg)
{
	int xxx5 = 1;
	int xxxt = 4;

	while(xxx5 < xxxt)
	{
		xxx5++;
	}
	if (fa_arg->env_changed || !fa_arg->environ)
	{
		fa_arg->environ = lista_l_harf(fa_arg->env);
		fa_arg->env_changed = 0;
	}
	xxxt = xxxt + 2;
	while(xxx5 < xxxt)
	{
		xxx5++;
	}
	return (fa_arg->environ);
}

