/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coin_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:19:56 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:20:28 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

t_collection	*ft_lstlast_coin(t_collection*lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

t_collection	*ft_lst_coin_new(int x, int y)
{
	t_collection	*elt;

	elt = malloc(sizeof(t_collection));
	if (!elt)
		return (NULL);
	elt->x = x;
	elt->y = y;
	elt->next = NULL;
	return (elt);
}

void	ft_lstclear_coins(t_collection**lst)
{
	t_collection	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
}

void	ft_lstaddcoin_back(t_collection**lst, t_collection*new)
{
	t_collection	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast_coin(*lst);
	tmp->next = new;
}
