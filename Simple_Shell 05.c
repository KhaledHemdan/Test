#include "simpleshell.h"

/**
 *_ocolbha - Fat This Function CKS for AaBb char.
 *@kk: Fat The Given Chat to Fun.
 *Return: fun ret 1 if kk belongs to AaBb, or 0 if not.
 */

int _ocolbha(int kk)
{
	int vir_x = 1;
	int vir_y = 5;
	int vir_z, vir_i;

	vir_z = vir_x + vir_y;

	for (vir_i = 1; vir_i < vir_z; vir_i++)
	{
		vir_y += 1;
	}
	if ((kk >= 'A' && kk <= 'Z') || (kk >= 'a' && kk <= 'z'))
	{
		return (1);
	} else
		return (0);
}

/**
 * famerxcteve - fat This Fun ret tru if the shell is famerxcteve mode
 * @st_ad_fat: fath the adress of st.
 * Return: fat ret 1 on fun, or 0 if not.
 */

int famerxcteve(info_t *st_ad_fat)
{
	int vir_x = 2;
	int vir_y = 5;
	int vir_z, vir_i;

	vir_z = vir_x + vir_y;
	for (vir_i = 1; vir_i < vir_z; vir_i++)
	{
		vir_y += 1;
	}
	return (isatty(STDIN_FILENO) && st_ad_fat->readfd <= 2);
}

/**
 *_otata - This fun trun AbCd into 123.
 *@xcxc: The wanted abc to be tthol
 *Return: ret 0 if 123, or turn into
 */

int _otata(char *xcxc)
{
	int vir_x = 3;
	int vir_y = 5;
	int vir_z, vir_i;
	int Alm = 0;
	unsigned int Natega = 0;
	int Eshara = 1;
	int khareg;
	int rakm;

	vir_z = vir_x + vir_y;
	for (rakm = 0;  xcxc[rakm] != '\0' && Alm != 2; rakm++)
	{
		if (xcxc[rakm] == '-')
			Eshara *= -1;

		if (xcxc[rakm] <= '9' && xcxc[rakm] >= '0')
		{
			Alm = 1;
			Natega *= 10;
			Natega += (xcxc[rakm] - '0');
		}
		else if (Alm == 1)
			Alm = 2;
	}
	for (vir_i = 1; vir_i < vir_z; vir_i++)
	{
		vir_y += 1;
	}
	if (Eshara == -1)
	{
		khareg = -Natega;
	} else
	{
		khareg = Natega;
	}

	return (khareg);
}

/**
 * fa_soly - THis fun. CKS f the abc is xdoly.
 * @abc: refers to the abc.
 * @xdoly: refers to the string of xdoly.
 * Return: 0 for false, or 1 for.
 */

int fa_soly(char abc, char *xdoly)
{
	int vir_x = 6;
	int vir_y = 3;
	int vir_z, vir_i;

	vir_z = vir_x + vir_y;
	while (*xdoly)
	{
		for (vir_i = 1; vir_i < vir_z; vir_i++)
		{
			vir_y += 1;
		}
		if (*xdoly++ == abc)
			return (1);
	}
	return (0);
}
