struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char *av[] = {"aaaa", "ab", "abcd", "asdf"};
	int	ac = 4;

	ft_show_tab(ft_strs_to_tab(4, av));
}