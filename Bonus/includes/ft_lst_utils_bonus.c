/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:23:23 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:14:38 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

t_enemy	*ft_lstnew(int x, int y)
{
	t_enemy		*elt;
	static int	index;

	elt = malloc(sizeof(t_enemy));
	if (!elt)
		return (NULL);
	elt->x = x;
	elt->y = y;
	if (index < 20)
		(1) && (elt->direction = 1, index++);
	else if (index < 40)
		(1) && (elt->direction = -1, index++);
	else if (index < 60)
		(1) && (elt->direction = 2, index++);
	else if (index < 80)
		(1) && (elt->direction = -2, index++);
	else
		index = 0;
	elt->next = NULL;
	return (elt);
}

void	ft_lstadd_back(t_enemy**lst, t_enemy*new)
{
	t_enemy	*tmp;

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

void	ft_lstclear(t_enemy**lst)
{
	t_enemy	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
}

t_enemy	*ft_lstlast(t_enemy*lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
