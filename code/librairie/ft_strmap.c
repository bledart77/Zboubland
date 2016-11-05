#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		length;
	char	*res;

	length = ft_strlen(s);
	res = (char*)malloc(sizeof(res) * length);
	while (i < length)
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
