void	ft_striteri(char *as, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	while (as[i])
	{
		f(i, as);
		i++;
	}
}
