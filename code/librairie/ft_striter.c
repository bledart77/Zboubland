void	ft_striter(char *as, void (*f)(char *))
{
	int		i;

	i = 0;
	while (as[i])
	{
		f(&as[i]);
		i++;
	}
}
