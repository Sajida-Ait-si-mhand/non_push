/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:49:52 by iqattami          #+#    #+#             */
/*   Updated: 2024/05/01 01:38:00 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int highest_position(s_liste *head, int a)
{
    s_liste *tmp;
    int i;

    tmp = head;
    i = 0;
    while(tmp)
    {
        if(tmp->data == a)
            break;
        i++;
        tmp = tmp->next;
    }
    return (i);
}

int index_position(s_liste *head, int a)
{
    s_liste *tmp;
    int i;

    tmp = head;
    i = 0;
    while(tmp)
    {
        if(tmp->index < a)
            break;
        i++;
        tmp = tmp->next;
    }
    return (i);
}

void sort_all(s_liste **stackA, s_liste **stackB)
{
    int	highest;
	int	position;

	highest = get_max(stackB);
	position = highest_position(*stackB, highest);
	while (ft_lstsize(stackB) > 0)
	{
		if (highest == (*stackB)->data)
		{
			pa(stackA, stackB);
			if (ft_lstsize(stackB) > 0)
			{
				highest = get_max(stackB);
				position = highest_position(*stackB, highest);
			}
		}
		else
		{
			if (position <= (ft_lstsize(stackB) / 2) && highest != (*stackB)->data)
				rb(stackB);
			else
				rrb(stackB);
		}
	}
    
}

void    push_all_B(s_liste **stackA, s_liste **stackB, int c)
{
    int size;
    int i;

    size = ft_lstsize(stackA);
    i = 0;
    while(i < size)
    {
        if((*stackA)->index <= i)
        {
            pb(stackA, stackB);
            rb(stackB);
            i++;
        }
        else if ((*stackA)->index <= (i + c))
        {
            pb(stackA, stackB);
            i++;
        }
        else if(index_position(*stackA, (i + c)) < ft_lstsize(stackA) / 2)
            ra(stackA);
        else
            rra(stackA);
    }
    sort_all(stackA, stackB);
}


