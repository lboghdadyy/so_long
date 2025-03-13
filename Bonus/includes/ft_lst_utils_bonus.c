/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:23:23 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/13 01:23:33 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

enemy *ft_lstnew(int x, int y)
{
	enemy *elt;

	elt = malloc(sizeof(enemy));
	if (!elt)
		return (NULL);
	elt->x = x;
	elt->y = y;
	elt->direction = 1;
	elt->next = NULL;
	return (elt);
}

void	ft_lstadd_back(enemy **lst, enemy *new)
{
	enemy *tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

void	ft_lstclear(enemy **lst)
{
	enemy *aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		free(lst);
		*lst = aux;
	}
	*lst = 0;
}

enemy *ft_lstlast(enemy *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}