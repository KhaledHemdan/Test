#include "simpleshell.h"
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	int fd = 2;
	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_faehot(av[0]);
				_faehot(": 0: Can't open ");
				_faehot(av[1]);
				_faehothrf('\n');
				_faehothrf(FKOSHY_BBUF);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	fanasbeaakayma(info);
	iqraa_tareekh(info);
	msl(info, av);
	return (EXIT_SUCCESS);
}