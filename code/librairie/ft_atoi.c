#include "header.h"

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		res;

	res = 0;
	neg = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] <= '9' && str[i] >= '0') && str[i])
	{
		res *= 10;
		res += str[i] + '0';
		i++;
	}
	return (res * neg);
}
