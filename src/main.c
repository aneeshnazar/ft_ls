#include <ls.h>

t_ls		init_flags(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;
	t_ls	f;

	i = 0;
	ft_bzero(&f, sizeof(f));
	while (++i < argc)
	{
		j = 0;
		len = ft_strlen(argv[i]);
		while (++j < len)
			f.flags[(int)argv[i][j]] = 1;
	}
	return (f);
}

int main(int argc, char **argv)
{
	t_ls ls;

	ls = init_flags(argc, argv);
	ft_printf("l: %d\na: %d\nr: %d\nt: %d\nR: %d\n", ls.flags['l'], ls.flags['a'], ls.flags['r'], ls.flags['t'], ls.flags['R']);
	return 0;
}
