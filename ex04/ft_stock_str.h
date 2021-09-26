#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

struct s_stock_str *ft_strs_to_tabs(int ac, char **av);

typedef struct s_stock_str
{
	int	size;
	char *str;
	char *copy;
}				t_stock_str;

#endif