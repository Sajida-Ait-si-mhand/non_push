/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:08:25 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/28 13:23:00 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(s_liste **stack_a)
{
    s_liste *tmp;

    tmp = *stack_a;
    while(tmp  && tmp->next)
    {
        if( tmp->data > tmp->next->data )
            return (1);
        tmp = tmp->next;
    }
    return (0);
}

int get_max(s_liste **stack)
{
    s_liste	*head;
	int		max;

	head = *stack;
	max = head->data;
	while (head)
	{
		if (max < head->data)
			max = head->data;
		head = head->next;
	}
	return (max);
}
int get_min(s_liste **stack)
{
    s_liste *head;
    int min;

    head = *stack;
    min = head->data;
    while(head)
    {
        if(min > head->data)
            min = head->data;
        head = head->next;
    }
    return (min);
}
void ft_index(s_liste **stack, int *tab , int len)
{
    s_liste	*tmp;
	int		i;

	i = 0;
	while (i < len)
	{
		tmp = *stack;
		while (tmp)
		{
			if(tmp->data == tab[i])
				tmp->index = i;
			tmp = tmp->next;
		}
		i++;
	}
}

void	free_stack(s_liste **stack)
{
	s_liste	*temp;

	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}
