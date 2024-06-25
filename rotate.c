/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:14:47 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:15:34 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(s_liste **stack)
{
	s_liste	*new_head;
	s_liste	*last;

	if (ft_lstsize(stack) < 2)
		return (-1);
	new_head = *stack;
	last = ft_lstlast(&new_head);
	*stack = new_head->next;
	last->next = new_head;
	new_head->next = NULL;
	return (0);
}
int	ra(s_liste **stackA)
{
	if (rotate(stackA) == -1)
		return (-1);
	ft_putstr_fd("ra", 1);
	return (0);
}
int	rb(s_liste **stackB)
{
	if (rotate(stackB) == -1)
		return (-1);
	ft_putstr_fd("rb", 1);
	return (0);
}
int	rr(s_liste **stackA, s_liste **stackB)
{
	if (ft_lstsize(stackA) < 2 || ft_lstsize(stackB) < 2)
		return (-1);
	rotate(stackA);
	rotate(stackB);
	ft_putstr_fd("rr", 1);
	return (0);
}