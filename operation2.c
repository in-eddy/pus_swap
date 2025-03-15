/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:38:47 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/17 16:17:57 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	pushx(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	pushx(b, a);
	write(1, "pb\n", 3);
}

t_stack	*rotatx(t_stack *a)
{
	t_stack	*l;
	t_stack	*k;

	if (!a || !a->next)
		return (a);
	l = a;
	l = l->next;
	k = last_node(l);
	k->next = a;
	a->next = NULL;
	return (l);
}

void	ra(t_stack **a)
{
	*a = rotatx(*a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (!b || !*b)
		return ;
	*b = rotatx(*b);
	write(1, "rb\n", 3);
}
