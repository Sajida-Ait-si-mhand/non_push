/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:47:20 by iqattami          #+#    #+#             */
/*   Updated: 2024/05/01 17:21:27 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_liste	*ft_lstnew(int content)
{
	s_liste	*node;

	node = (s_liste *)malloc(sizeof(s_liste));
	if (node == NULL)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}

// void	ft_lstadd_back(s_liste **lst, s_liste *new)
// {
// 	s_liste	*tmp;

// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 		return ;
		
// 	}
// 	tmp = *lst;
// 	while (tmp->next != NULL)
// 	{
// 		tmp = tmp->next;
// 	}
// 	tmp->next = new;
// }
void	ft_lstadd_back(s_liste **lst, s_liste *new)
{
	s_liste	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	tmp = *lst;
	if (tmp)
	{
		tmp = ft_lstlast(&tmp);
		tmp->next = new;
	}
	else
		*lst = new;
}

int	ft_lstsize(s_liste **lst)
{
	int	i;
	s_liste	*tmp;

	tmp = *lst;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

s_liste	*ft_lstlast(s_liste **lst)
{
	s_liste	*tmp;

	tmp = *lst;
	if (tmp == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}