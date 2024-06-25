/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:15:12 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:15:28 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	r_rotate(s_liste **stack)
{
	s_liste	*head;
	s_liste	*last;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	last = ft_lstlast(&head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	last->next = *stack;
	*stack = last;
	return (0);
}
int	rra(s_liste **stackA)
{
	if (r_rotate(stackA) == -1)
		return (-1);
	ft_putstr_fd("rra", 1);
	return (0);
}
int	rrb(s_liste **stackB)
{
	if (r_rotate(stackB) == -1)
		return (-1);
	ft_putstr_fd("rrb", 1);
	return (0);
}
int	rrr(s_liste **stackA, s_liste **stackB)
{
	if (ft_lstsize(stackA) < 2 || ft_lstsize(stackA) < 2)
		return (-1);
	r_rotate(stackA);
	r_rotate(stackB);
	ft_putstr_fd("rrr", 1);
	return (0);
}