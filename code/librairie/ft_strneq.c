#include <string.h>

int		ft_strneq(char const *s1, char const *s2, size_t taille)
{
	size_t		i;

	i = 0;
	while (s1[i] && s2[i] && i < taille)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (!s1[i] || !s2[i])
		return (0);
	return (1);
}
