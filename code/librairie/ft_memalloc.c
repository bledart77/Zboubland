
#include <stdlib.h>

void	*ft_memalloc(size_t taille)
{
	void	*res;

	res = (void*)malloc(sizeof(res) * taille);
	return (res);
}
