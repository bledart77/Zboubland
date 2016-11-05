#include <stdlib.h>

char	*ft_strnew(size_t taille)
{
	char	*res;
	int		i;

	i = 0;
	res = (char*)malloc(sizeof(res) * taille + 1);
	while (i <= taille)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
