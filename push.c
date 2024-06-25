/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:14:14 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:15:39 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(s_liste **stackS, s_liste **stackD)
{
	s_liste	*tmp;
	s_liste	*headS;
	s_liste	*headD;

	if (ft_lstsize(stackS) == 0)
		return (-1);
	headS = *stackS;
	headD = *stackD;
	tmp = headS->next;
	
	if (!stackD)
	{
		headD = headS;
		headD->next = NULL;
	}
	else
	{
		headS->next = *stackD;
		*stackD = headS;
	}
	*stackS = tmp;
	return (0);
}

int	pa(s_liste **stackA, s_liste **stackB)
{
	if (push(stackA, stackB) == -1)
		return (-1);
	ft_putstr_fd("pa", 1);
	return (0);
}

int	pb(s_liste **stackA, s_liste **stackB)
{
	if (push(stackB, stackA) == -1)
		return (-1);
	ft_putstr_fd("pb", 1);
	return (0);
}