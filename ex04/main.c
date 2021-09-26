#include "ft_stock_str.h"
#include <stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	int	i = 0;
	t_stock_str *result;
	int	ac = 4;
	char *av[] = {"a", "bc", "bcc", "gggg"};

	result = ft_strs_to_tab(ac, av);



	while (i < ac)
	{
		printf("%d 번, size = %d\n", i, result[i].size);
		printf("%d 번, str = %s\n", i, result[i].str);
		printf("%d 번, copy = %s\n\n", i, result[i].copy);
		i++;
	}
}