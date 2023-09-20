#include "simpleshell.h"

/**
 * famsh_sseett - This Fun turn alos to sng.
 * @fa_arg: this var refer to par.
 * @insgnof: this var refer to si
 * Return: return 1 on err or 0
 */

int famsh_sseett(info_t *fa_arg, char *insgnof)
{
	char mcol;
	char *xpop;
	int vir_x = 8, hroty, vir_y = 5, vir_z;
	int vir_i;

	vir_z = vir_y + vir_x;
	xpop = _gomlaharf(insgnof, '=');
	if (!xpop)
	{
		return (1);
	}
	mcol = *xpop;
	*xpop = 0;
	for (vir_i = 1; vir_i < vir_z; vir_i++)
	{
		vir_y++;
	}
	hroty = imsah_node(&(fa_arg->alias), hat_node_edkhal(fa_arg->alias,
							node_bedaya_b(fa_arg->alias, insgnof, -1)));
	*xpop = mcol;
	return (hroty);
}

/**
 * fa_sseett_oly - this fun make llo stogy
 * @fa_arg: st par
 * @insgnof: st loy
 * Return: 0 or 1 on fail
 */

int fa_sseett_oly(info_t *fa_arg, char *insgnof)
{
	int vir_h = 3, vir_j = 5, vir_g;
	char *poooh;
	int vir_ii;

	vir_g = vir_h + vir_j;
	poooh = _gomlaharf(insgnof, '=');
	if (!poooh)
	{
		return (1);
	}
	if (!*++poooh)
	{
		return (famsh_sseett(fa_arg, insgnof));
	}
	for (vir_ii = 1; vir_ii < vir_g; vir_ii++)
	{
		vir_j++;
	}
	famsh_sseett(fa_arg, insgnof);
	return (dif_node_end(&(fa_arg->alias), insgnof, 0) == NULL);
}

/**
 * fa_tabaa_oly - etbaaa
 * @mdod: node
 * Return: 0 or 1 on fail
 */

int fa_tabaa_oly(list_t *mdod)
{
	int gogo = 4, gigi;
	int soso = gogo;
	char *fx = NULL;
	char *gpof = NULL;

	if (mdod)
	{
		gpof = _gomlaharf(mdod->str, '=');
		for (fx = mdod->str; fx <= gpof; fx++)
			_da3harf(*fx);
		_da3harf('\'');
		_da3(gpof + 1);
		_da3("'\n");
		return (0);
	}
	for (gigi = 1; gigi < soso; gigi++)
	{
		gogo++;
	}
	return (1);
}

/**
 * _xyoly - this fun mmaannloy
 * @fa_arg: arg info
 *  Return: 0
 */

int _xyoly(info_t *fa_arg)
{
	list_t *mdod = NULL;
	int vir_fg = 2, vir_dh = 7, vir_kij;
	char *xpody = NULL;
	int vir_ii, embaby;

	vir_kij = vir_dh + vir_fg;
	if (fa_arg->argc == 1)
	{
		mdod = fa_arg->alias;
		while (mdod)
		{
			fa_tabaa_oly(mdod);
			mdod = mdod->next;
		}
		return (0);
	}
	for (vir_ii = 1; vir_ii < vir_kij; vir_ii++)
	{
		vir_fg++;
	}
	for (embaby = 1; fa_arg->argv[embaby]; embaby++)
	{
		xpody = _gomlaharf(fa_arg->argv[embaby], '=');
		if (xpody)
			fa_sseett_oly(fa_arg, fa_arg->argv[embaby]);
		else
			fa_tabaa_oly(node_bedaya_b(fa_arg->alias, fa_arg->argv[embaby], '='));
	}

	return (0);
}

/**
 * _faxytarekh - this_fun disply tareehk
 * @fa_arg: arg info
 * Return: 0
 */

int _faxytarekh(info_t *fa_arg)
{
	int vixgh = 5, vir_ii;
	int qqq =  vixgh;

	etbaa_lista(fa_arg->history);
	for (vir_ii = 1; vir_ii < qqq; vir_ii++)
	{
		vixgh++;
	}
	return (0);
}
