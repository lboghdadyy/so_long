/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:23:23 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/02/28 17:09:43 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// t_list	*ft_lstnew(char *line)
// {
// 	t_list	*elt;

// 	elt = malloc(sizeof(t_list));
// 	if (!elt)
// 		return (NULL);
// 	elt->line = line;
// 	elt->position = ft_strdup("other");
// 	elt->next = NULL;
// 	return (elt);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*tmp;

// 	if (!new)
// 		return ;
// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	tmp = ft_lstlast(*lst);
// 	tmp->next = new;
// }

// void	ft_lstclear(t_list **lst)
// {
// 	t_list *aux;

// 	if (!*lst)
// 		return ;
// 	while (*lst)
// 	{
// 		aux = (*lst)->next;
// 		free((*lst)->line);
// 		free(lst);
// 		*lst = aux;
// 	}
// 	*lst = 0;
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (lst)
// 	{
// 		if (!lst->next)
// 			return (lst);
// 		lst = lst->next;
// 	}
// 	return (lst);
// }