/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:33:47 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/28 11:07:53 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicate(int *tab, int len)
{
    int i = 0;
    int j;    
    while (i < (len - 1))
    {
        j = i + 1;
        while (j <= (len -1))
        {
            if (tab[i] == tab[j++])
                return 1;
        }
        i++;
    }
    return 0;
}

int check_spaces(char *str)
{
    int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] && str[i] == ' ')
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int check_digits(char *str)
{
   int i;
	
	i = 0;
	while (str[i] && ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || (str[i] == '+' || str[i] == '-')))
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if ((i > 0 && str[i - 1] != ' ') || (str[i + 1] == '\0' || str[i + 1] == ' '))
				return (1);
		}
		if (str[i + 1] == '\0')
			return 0;
		i++;
	}
	return(1);
}

long	atoi_check(long result)
{
	if (result > INT_MAX || result < INT_MIN)
		return (1);
	return (0);
}

int	*sort_table(int *tab, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < (len - 1))
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}
