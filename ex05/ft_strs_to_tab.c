#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*arr;

	i = 0;
	while (src[i])
	{
		i++;
	}
	arr = (char *)malloc(sizeof(char) * i + 1);
	arr[i] = '\0';
	i--;
	while (i >= 0)
	{
		arr[i] = src[i];
		i--;
	}
	return (arr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*result;

	if (!(result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)	
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].size = '\0';
	result[i].str = '\0';
	result[i].copy = '\0';
	return (result);
}