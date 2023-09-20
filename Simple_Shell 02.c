#include "simpleshell.h"

/**
 * iqraa_bbuuff - This fun scan the buffer
 * @fa_arg: arg info
 * @pofo: refer to the buf
 * @ximpo: refer to the size of data
 * Return: brotyty
 */

ssize_t iqraa_bbuuff(info_t *fa_arg, char *pofo, size_t *ximpo)
{
	int xvx = 1, xmx = 3;
	ssize_t brotyty = 0;

	if (*ximpo)
	{
		return (0);
	}
	while (xvx < xmx)
	{
		xvx++;
	}
	brotyty = read(fa_arg->readfd, pofo, iqraa_bbuuff_SIZE);
	if (brotyty >= 0)
		*ximpo = brotyty;
	return (brotyty);
}

/**
 * edkhal_bbuuff - this fun enter pofo
 * @fa_arg: arg info
 * @pofo: refer to the location
 * @bloly: refer to the location
 * Return: data that has been read
 */

ssize_t edkhal_bbuuff(info_t *fa_arg, char **pofo, size_t *bloly)
{
	int xvcb = 1, xmmm = 3;
	ssize_t brotyrf = 0;
	size_t trolenpo = 0;

	if (!*bloly)
	{
		free(*pofo);
		*pofo = NULL;
		signal(SIGINT, almedkhaleed);
#if EMAR_HAAAAAT
		brotyrf = getline(pofo, &trolenpo, stdin);
#else
		brotyrf = _hatkhat(fa_arg, pofo, &trolenpo);
#endif
		while (xvcb < xmmm)
		{
			xvcb++;
		}
		if (brotyrf > 0)
		{
			if ((*pofo)[brotyrf - 1] == '\n')
			{
				(*pofo)[brotyrf - 1] = '\0';
				brotyrf--;
			}
			xmmm = xmmm + 3;
			while (xvcb < xmmm)
			{
				xvcb++;
			}
			fa_arg->linecount_flag = 1;
			imsah_taalek(*pofo);
			ebni_tareekh(fa_arg, *pofo, fa_arg->histcount++);
			{
				*bloly = brotyrf;
				fa_arg->cmd_buf = pofo;
			}
		}
	}
	return (brotyrf);
}

/**
 * almedkhaleed - prevernt cc.
 * @sig_num: number with the sign.
 * Return: nothing.
 */

void almedkhaleed(__attribute__((unused))int nom_sgn)
{
	int xvx = 1, xmx = 3;

	_da3("\n");
	while (xvx < xmx)
	{
		xvx++;
	}
	_da3("$ ");
	_da3harf(FKOSHY_BBUF);
}



/**
 * hat_edkhal - hat el -ve line.
 * @fa_arg: arg info.
 * Return: data.
 */

ssize_t hat_edkhal(info_t *fa_arg)
{
	int cbcbc = 1;
	static char *pofy;
	int xcvbn = 1;
	static size_t x;
	ssize_t zxc = 0;
	int hgfds = 2;
	char *ijn;
	static size_t hlofa, y;
	char **pofypofyj = &(fa_arg->arg);
	int plmnki = xcvbn + hgfds + cbcbc;

	_da3harf(FKOSHY_BBUF);
	while (xcvbn < plmnki)
	{
		xcvbn++;
	}
	zxc = edkhal_bbuuff(fa_arg, &pofy, &hlofa);
	if (zxc == -1)
	{
		return (-1);
	}
	plmnki = plmnki + 2;
	while (xcvbn < plmnki)
	{
		xcvbn++;
	}
	if (hlofa)
	{
		y = x;
		ijn = pofy + x;
		fahs_chain(fa_arg, pofy, &y, x, hlofa);
		while (y < hlofa)
		{
			if (hal_chain(fa_arg, pofy, &y))
				break;
			y++;
		}
		plmnki = plmnki + 2;
		while (xcvbn < plmnki)
		{
			xcvbn++;
		}
		x = y + 1;
		if (x >= hlofa)
		{
			x = hlofa = 0;
			fa_arg->cmd_buf_type = NNORN_DMC;
		}

		*pofypofyj = ijn;
		return (_strtole(ijn));
	}

	*pofypofyj = pofy;
	return (zxc);
}


/**
 * _hatkhat - this fun go to next line
 * @fa_arg: arg info
 * @opoitr: the location
 * @gloly:the buffer
 * Return: kodkod
 */

int _hatkhat(info_t *fa_arg, char **opoitr, size_t *gloly)
{
	int xbxbxb1 = 1, xbxbxb2 = 1, xbxbxb3 = 1, xbxbxb4 = 1;
	ssize_t fgrampo = 0, kodkod = 0;
	char *pompgded = NULL;
	static char pofyfy[iqraa_bbuuff_SIZE];
	size_t ckoko;
	char *pomp = NULL, *knockknock;
	int xbxbxbt = xbxbxb1 + xbxbxb2 + xbxbxb3 + xbxbxb4;
	static size_t xvxii, glong;

	pomp = *opoitr;
	if (gloly && pomp)
		kodkod = *gloly;
	xbxbxbt = xbxbxbt + 2; /*jfjfjfj*/
	if (xvxii == glong)
		xvxii = glong = 0;
	fgrampo = iqraa_bbuuff(fa_arg, pofyfy, &glong);
	if ((glong == 0 && fgrampo == 0) || fgrampo == -1)
		return (-1);
	xbxbxbt = xbxbxbt + 2; /*jfjfjfj*/
	knockknock = _gomlaharf(pofyfy + xvxii, '\n');
	ckoko = knockknock ? 1 + (unsigned int)(knockknock - pofyfy) : glong;
	pompgded = _retawze3(pomp, kodkod, kodkod ? kodkod + ckoko : ckoko + 1);
	if (!pompgded)
		return (pomp ? free(pomp), -1 : -1);
	if (kodkod)
		_gomlaota(pompgded, pofyfy + xvxii, ckoko - xvxii);
	else
		_gomlanoskha(pompgded, pofyfy + xvxii, ckoko - xvxii + 1);
	kodkod += ckoko - xvxii;
	xvxii = ckoko;
	xbxbxbt = xbxbxbt + 2;
	while (xbxbxb1 < xbxbxbt)
	{
		xbxbxb1++;
	}
	pomp = pompgded;
	if (gloly)
		*gloly = kodkod;
	*opoitr = pomp;
	return (kodkod);
}
