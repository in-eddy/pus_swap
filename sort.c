/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:48:42 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/19 13:30:07 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **a)
{
	sa(a);
}

void	sort_3(t_stack **a)
{
	int		f;
	int		s;
	int		t;
	t_stack	*tmp;

	tmp = *a;
	f = tmp->value;
	s = tmp->next->value;
	t = tmp->next->next->value;
	if ((f > s) && (f < t))
		sa(a);
	else if ((f < s) && (s > t) && (f > t))
		rra(a);
	else if ((f < s) && (f < t) && (s > t))
	{
		rra(a);
		sa(a);
	}
	else if ((f > s) && (s > t))
	{
		sa(a);
		rra(a);
	}
	else if ((f > s) && (s < t) && (f > t))
		ra(a);
}

void	sort_4(t_stack **a, t_stack **b )
{
	int	min;

	indexing(*a);
	min = find_pos_min(a);
	if (min == 1)
		sa(a);
	else if (min == 2)
	{
		rra(a);
		rra(a);
	}
	else if (min == 3)
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	min;

	min = find_pos_min(a);
	if (min == 1)
		sa(a);
	else if (min == 2)
	{
		rra(a);
		rra(a);
		rra(a);
	}
	else if (min == 3)
	{
		rra(a);
		rra(a);
	}
	else if (min == 4)
		rra(a);
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}
