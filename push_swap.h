/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:49:08 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/27 10:10:58 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

typedef struct s_liste
{
    int data;
    int index;
    struct s_liste *next;
} s_liste;


int	    swap(s_liste **stack);
int	    sa(s_liste **stack);
int	    sb(s_liste **stack);
int	    ss(s_liste **stacka, s_liste **stackb);
int	    push(s_liste **stackS, s_liste **stackD);
int	    pa(s_liste **stackA, s_liste **stackB);
int	    pb(s_liste **stackA, s_liste **stackB);
int	    rotate(s_liste **stack);
int	    ra(s_liste **stackA);
int	    rb(s_liste **stackB);
int	    rr(s_liste **stackA, s_liste **stackB);
int	    r_rotate(s_liste **stack);
int	    rra(s_liste **stackA);
int	    rrb(s_liste **stackB);
int	    rrr(s_liste **stackA, s_liste **stackB);
int     get_max(s_liste **stack);
int     get_min(s_liste **stack);
void ft_index(s_liste **stack, int *tab , int len);
void    sort_2(s_liste **stackA);
void sort_3(s_liste **stack);
int check_digits(char *str);
int is_sorted(s_liste **stack_a);
int duplicate(int *tab, int len);
char	*ft_strdup(const char *s);
void	sort_5(s_liste **stackA, s_liste **stackB);
void	sort_4(s_liste **stackA, s_liste **stackB);
char	**ft_split(char const *str, char charset);
char	*ft_strjoin(char *s1, char *s2);
int	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
long	ft_atoi(char *str);
s_liste	*ft_lstnew(int content);
void	ft_lstadd_back(s_liste **lst, s_liste *new);
int	ft_lstsize(s_liste **lst);
s_liste	*ft_lstlast(s_liste **lst);
void	free_stack(s_liste **stack);
long	atoi_check(long result);
int	*sort_table(int *tab, int len);
int ft_check(s_liste **head, char *join);
void    push_all_B(s_liste **stackA, s_liste **stackB, int c);
void sort_all(s_liste **stackA, s_liste **stackB);
int check_spaces(char *str);



#endif