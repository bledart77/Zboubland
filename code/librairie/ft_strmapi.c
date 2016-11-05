#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int		length;
	char	*res;

	length = ft_strlen(s);
	res = (char*)malloc(sizeof(res) * length);
	while (i < (unsigned int)length)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
