/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:57:46 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/27 09:34:28 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int split_len(char **split)
{
    int i;

    i = 0;
    while(split[i])
        i++;
    return (i);
}

void	fill_stack(s_liste **head, int *tab, int c)
{
	int i  = 0;
	
	while (i < c)
    {
		ft_lstadd_back(head, ft_lstnew(tab[i++]));
    }
    if (i == 4)
        {
            s_liste *tmp = *head;
            while (tmp)
            {
                printf("data=%d\n",tmp->data);
                tmp = tmp->next;
            }
        }
}

int ft_check(s_liste **head, char *join)
{
    char    **split;
    int     *tab;
    int     i;
    int     s;
    
    s = 0;
    split = ft_split(join, ' ');
    i = split_len(split);
    tab = (int *)malloc(sizeof(int) * i);   
    while (s < i)
    {
        tab[s] = ft_atoi(split[s]);
        s++;
    }
    if(duplicate(tab, i) == 1)
    {
        (ft_putstr_fd("error", 1), exit(1));
    }  
	fill_stack(head, tab, i);
	tab = sort_table(tab, i);
	ft_index(head, tab, i);
    if (is_sorted(head) == 1)
        return (1);
    return(0);
}

void sort(s_liste **stackA, s_liste **stackB)
{
    if (ft_lstsize(stackA) == 2)
        sort_2(stackA);
    else if (ft_lstsize(stackA) == 3)
        sort_3(stackA);
    else if (ft_lstsize(stackA) == 4)
        sort_4(stackA, stackB);
    else if (ft_lstsize(stackA) == 5)
        sort_5(stackA, stackB);
    else if (ft_lstsize(stackA) > 5)
    {
        if (ft_lstsize(stackA) < 250)
            push_all_B(stackA, stackB, 15);
        else
            push_all_B(stackA, stackB, 40);
    }
}

int main(int ac, char **av)
{
    s_liste	*stackA = NULL;
	s_liste	*stackB = NULL;
    int i = 1;
    int j = 1;
    char *join;

    join = NULL;
    while (i < ac)
    {
        if (check_digits(av[i]) == 1 || check_spaces(av[i]) == 1)
        {
            ft_putstr_fd("error", 1);
            return (1);
        }
        i++;
    }    
    while (j < ac)
        join = ft_strjoin(join, av[j++]);
    if (ft_check(&stackA, join) == 1)
        sort(&stackA, &stackB);
    free_stack(&stackA);
    // if (stackB != NULL)
	free_stack(&stackB);
    return 0;
}
