/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:06:07 by iqattami          #+#    #+#             */
/*   Updated: 2024/05/01 00:18:54 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	while (s[i])
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = 0;
	return (p);
}


void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

long	ft_atoi(char *str)
{
	int	sign;
	long	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (atoi_check(result * sign))
		return (2147483648);
	return (result * sign);
}
