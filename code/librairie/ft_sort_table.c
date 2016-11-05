#include "header.h"

t_list	*check(t_list *elt, int (*cmp)(int, int))
{
	t_list		*elt2;

	elt2 = elt->next;
	while (cmp(elt->data, elt2->data) == 0 && elt2 != NULL)
	{
		elt = elt->next;
		elt2 = elt2->next;
	}
	return (elt);
}

void	ft_sort_list(t_list *begin_list, int (*cmp)(int, int))
{
	t_list		*avant;
	t_list		*elt;
	t_list		*apres;
	t_list		*safe;

	avant = begin_list;
	avant = check(avant);
	elt = avant->next;
	apres = elt->next;
	while (apres != NULL)
	{
		if (cmp(elt->data, apres->data) == 0)
		{
			safe = elt;


