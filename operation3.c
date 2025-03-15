/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:45:56 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/17 16:21:30 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_stack *a)
{
	t_stack	*tmp;
	int		max;

	tmp = a;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

int	find_pos_min(t_stack **list)
{
	int		min;
	int		i;
	t_stack	*t;

	i = 0;
	t = *list;
	while (t)
	{
		min = t->index;
		if (min == 0)
			return (i);
		i++;
		t = t->next;
	}
	return (i);
}

int	find_pos_max(t_stack *list)
{
	int		max;
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = list;
	while (tmp)
	{
		max = tmp->index;
		if (max == (len(list) - 1))
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
