#include "simpleshell.h"

/**
 * _fa_xy_ThDC - THis Fun toghayr elmasar bta3 3amalya.
 * @fa_arg: this var refers to args in struct.
 *
 *  Return: 0
 */

int _fa_xy_ThDC(info_t *fa_arg)
{
	char *oss;
	int vir_y = 3, vir_i;
	char *msar, buffer[1024];
	int vir_x = 1;
	int gher_msar, vir_z;

	oss = getcwd(buffer, 1024);
	if (!oss)
	{
		_da3("TODO: >>getcwd failure emsg here<<\n");
	}
	vir_z = vir_x + vir_y;
	for(vir_i=1; vir_i<vir_z; vir_i++)
	{
		vir_y++;
	}
	if (!fa_arg->argv[1])
	{
		msar = _fahatbeaa(fa_arg, "Home=");
		if (!msar)
			gher_msar = chdir((msar = _fahatbeaa(fa_arg, "PWD=")) ? msar : "/");
		else
			gher_msar = chdir(msar);
	}
	else if (_strqarn(fa_arg->argv[1], "-") == 0)
	{
		if (!_fahatbeaa(fa_arg, "OLDPWD="))
		{
			_da3(oss);
			_da3harf('\n');
			return (1);
		}
		_da3(_fahatbeaa(fa_arg, "OLDPWD=")), _da3harf('\n');
		gher_msar = chdir((msar = _fahatbeaa(fa_arg, "OLDPWD=")) ? msar : "/");
	}
	else
		gher_msar = chdir(fa_arg->argv[1]);
	if (gher_msar == -1)
	{
		etbaa_ghalat(fa_arg, "can not cd");
		_faehot(fa_arg->argv[1]), _faehothrf('\n');
	}
	else
	{
		_setttbeaa(fa_arg, "OLDPWD", _fahatbeaa(fa_arg, "PWD="));
		_setttbeaa(fa_arg, "PWD", getcwd(buffer, 1024));
	}
	for(vir_i=1; vir_i<vir_z; vir_i++)
	{
		vir_y++;
	}
	return (0);
}

/**
 * _xmosaada - THis Fun toghayr elmasar bta3 3amalya.
 * @fa_arg: this var refers to args in struct.
 *
 *  Return: 0
 */

int _xmosaada(info_t *fa_arg)
{
	int vir_y = 2;
	char **array_of_argu;
	int vir_x = 7;
	int vir_z, vir_i;

	vir_z = vir_y + vir_x;
	array_of_argu = fa_arg->argv;
	_da3("Mosa3da Error \n");
	for(vir_i=1; vir_i<vir_z; vir_i++)
	{
		vir_y++;
	}
	if (0)
	{
		_da3(*array_of_argu);
	}
	return (0);
}

/**
 * _fa_xy_Thxit - the fun go out
 * @fa_arg: this var refers to args in struct.
 *
 *  Return: go out.
 */

int _fa_xy_Thxit(info_t *fa_arg)
{
	int vir_x = 6;
	int chk_ext;
	int vir_y = 4;
	int vir_z, vir_i;

	vir_z = vir_y + vir_x;
	if (fa_arg->argv[1])
	{
		chk_ext = _farrotata(fa_arg->argv[1]);
		for(vir_i=1; vir_i<vir_z; vir_i++)
		{
			vir_y++;
		}
		if (chk_ext == -1)
		{
			fa_arg->status = 2;
			etbaa_ghalat(fa_arg, "gher kanony Number: ");
			_faehot(fa_arg->argv[1]);
			_faehothrf('\n');
			return (1);
		}
		fa_arg->err_num = _farrotata(fa_arg->argv[1]);
		return (-2);
	}
	for(vir_i=1; vir_i<vir_z; vir_i++)
	{
		vir_y++;
	}
	fa_arg->err_num = -1;
	return (-2);
}
