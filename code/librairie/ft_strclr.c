void	ft_strclr(char *as)
{
	int		i;

	i = 0;
	while (as[i])
	{
		as[i] = '\0';
		i++;
	}
}
