/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:13:39 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:13:43 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(s_liste **stack)
{
	s_liste	*head;
	s_liste	*next_head;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	next_head = head->next;
	if (!head && !next_head)
		return (-1);
	tmp_val = head->data;
	tmp_index = head->index;
	head->data = next_head->data;
	head->index = next_head->index;
	next_head->data = tmp_val;
	next_head->index = tmp_index;
	return (0);
}

int	sa(s_liste **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putstr_fd("sa", 1);
	return (0);
}

int	sb(s_liste **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putstr_fd("sb", 1);
	return (0);
}
int	ss(s_liste **stacka, s_liste **stackb)
{
	if ((ft_lstsize(stacka) < 2) || (ft_lstsize(stackb) < 2))
		return (-1);
	swap(stacka);
	swap(stackb);
	ft_putstr_fd("ss", 1);
	return (0);
}