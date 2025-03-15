/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:48:54 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/19 13:32:55 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	decide(t_stack **stack_a)
{
	int		count;
	t_stack	*tmp;
	int		size;

	size = len(*stack_a);
	count = 0;
	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->index - tmp->next->index <= 4
			&& tmp->index - tmp->next->index > 1)
			count++;
		tmp = tmp->next;
	}
	if (count * 10 >= 6 * size)
		return (1);
	return (0);
}

int	chunck_size(int size)
{
	if (size > 100)
		return (34);
	return (16);
}

void	from_a_to_b(t_stack **a, t_stack **b, int i, int k)
{
	int		size_chunck;
	t_stack	*copy;

	size_chunck = chunck_size(len(*a));
	k = decide(a);
	i = 0;
	while (*a)
	{
		copy = *a;
		if (copy->index <= i)
		{
			pb(a, b);
			i++;
		}
		else if (copy->index <= (i + size_chunck))
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if (k == 1)
			rra(a);
		else
			ra(a);
	}
}

void	from_b_to_a(t_stack **a, t_stack **b)
{
	int	size;
	int	pos;

	size = len(*b);
	while (size)
	{
		pos = find_pos_max(*b);
		if (pos <= size / 2)
		{
			while (pos--)
				rb(b);
		}
		else
		{
			while (pos++ != size)
				rrb(b);
		}
		pa(a, b);
		size--;
	}
}

void	sort_100_500(t_stack **a, t_stack **b)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	from_a_to_b(a, b, i, k);
	from_b_to_a(a, b);
}
