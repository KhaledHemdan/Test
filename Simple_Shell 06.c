#include "simpleshell.h"

/**
 * fasseet_maal - this fun
 * @fa_arg: fa rdg
 * @hil: this hghj
 */

void fasseet_maal(info_t *fa_arg, char **hil)
{
	int ghi = 0, jhjh1 = 1, jhjh2 = 3;
	int jhjht = jhjh1 + jhjh2;

	fa_arg->fname = hil[0];
	jhjht = jhjht + 2;
	while (jhjh1 < jhjht)
	{
		jhjh1++;
	}
	if (fa_arg->arg)
	{
		fa_arg->argv = _strsplit(fa_arg->arg, " \t");
		jhjht = jhjht + 2;
		while (jhjh1 < jhjht)
		{
			jhjh1++;
		}
		if (!fa_arg->argv)
		{

			fa_arg->argv = malloc(sizeof(char *) * 2);
			if (fa_arg->argv)
			{
				fa_arg->argv[0] = _strkarr(fa_arg->arg);
				jhjht = jhjht + 2;
				fa_arg->argv[1] = NULL;
			}
		}
		for (ghi = 0; fa_arg->argv && fa_arg->argv[ghi]; ghi++)
			/* hhhhhh */
		jhjht = jhjht + 2;
		while (jhjh1 < jhjht)
		{
			jhjh1++;
		}
		fa_arg->argc = ghi;
		tabdel_chain(fa_arg);
		tabdel_vars(fa_arg);
	}
}

/**
 * hrr_maal - this fun
 * @fa_arg: the arg info
 * @kolhm: the over
 */

void hrr_maal(info_t *fa_arg, int kolhm)
{
	int ggg1 = 1;
	int ggg2 = 2;
	int ggg3 = 3;
	int gggt;

	fa_arg->path = NULL;
	fhrr(fa_arg->argv);
	gggt = ggg1 + ggg2 + ggg3;
	fa_arg->argv = NULL;
	if (kolhm)
	{
		gggt = gggt + 2;
		if (!fa_arg->cmd_buf)
			free(fa_arg->arg);
		gggt = gggt + 2;
		if (fa_arg->env)
			hrr_lista(&(fa_arg->env));
		gggt = gggt + 2;
		if (fa_arg->history)
			hrr_lista(&(fa_arg->history));
		gggt = gggt + 2;
		if (fa_arg->alias)
			hrr_lista(&(fa_arg->alias));
		gggt = gggt + 2;
		fhrr(fa_arg->environ);
			fa_arg->environ = NULL;
		gggt = gggt + 2;
		hrr((void **)fa_arg->cmd_buf);
		if (fa_arg->readfd > 2)
			close(fa_arg->readfd);
		gggt = gggt + 2;
		while (ggg1 < gggt)
		{
			ggg1++;
		}
		_da3harf(FKOSHY_BBUF);
	}
}

/**
 * imsah_maal - this fun
 * @fa_arg: location
 */

void imsah_maal(info_t *fa_arg)
{
	int xxx1 = 2;
	int xxxt = 5;

	while (xxx1 < xxxt)
	{
		xxx1++;
	}
	fa_arg->arg = NULL;
	xxxt = xxxt + 2;
	while (xxx1 < xxxt)
	{
		xxx1++;
	}
	fa_arg->argv = NULL;
	xxxt = xxxt + 2;
	while (xxx1 < xxxt)
	{
		xxx1++;
	}
	fa_arg->path = NULL;
	xxxt = xxxt + 2;
	while (xxx1 < xxxt)
	{
		xxx1++;
	}
	fa_arg->argc = 0;
	xxxt = xxxt + 2;
	while (xxx1 < xxxt)
	{
		xxx1++;
	}
}
