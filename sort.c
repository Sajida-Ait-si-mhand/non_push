/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:56:45 by iqattami          #+#    #+#             */
/*   Updated: 2024/02/29 16:31:27 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(s_liste **stack)
{
    s_liste *head;
    int max;
    int min;

    max = get_max(stack);
    min = get_min(stack);
    head = *stack;
    if(head->data == max)
        {
            ra(stack);
            if(head->data != min)
                rra(stack);
        }
    else if (head->next->data == max)
    {
        if(head->data != min)
            rra(stack);
        else
            {
                sa(stack);
                ra(stack);
            }
    }
    else if (head->next->next->data == max && head->next->data == min)
        sa(stack);
}

void	sort_4(s_liste **stackA, s_liste **stackB)
{
	s_liste	*min;
	int		i;

	min = *stackA;
	i = 0;
	while ((min->data != get_min(stackA)) && min->next != NULL)
	{
		min = min->next;
		i++;
	}
	while (i-- > 0)
		ra(stackA);
	pa(stackA, stackB);
	sort_3(stackA);
	pb(stackA, stackB);
}

void	sort_5(s_liste **stackA, s_liste **stackB)
{
	s_liste	*min;
	int		i;

	min = *stackA;
	i = 0;
	while ((min->data != get_min(stackA)) && min->next != NULL)
	{
		min = min->next;
		i++;
	}
	while (i-- > 0)
		ra(stackA);
	pa(stackA, stackB);
	sort_4(stackA, stackB);
	pb(stackA, stackB);
}

void	sort_2(s_liste **stackA)
{
	s_liste *tmp;

	tmp = *stackA;
	if(tmp->data > tmp->next->data)
		sa(stackA); 
}
