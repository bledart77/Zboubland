#include "header.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[k])
		{
			while (to_find[j])
			{
				if (str[i + j] == to_find[j])
					k++;
				j++;
			}
			if (j == k && j != 0)
				return (&str[i]);
			j = 0;
			k = 0;
		}
		i++;
	}
	return (NULL);
}
