#include "header.h"

char	*ft_strncat(char *s1, char *s2, int n)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
