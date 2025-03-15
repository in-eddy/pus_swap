/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:56:56 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/24 16:31:12 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *l)
{
	while ((l && l->next && l->value < l->next->value))
		l = l->next;
	if (l->next == NULL )
		return (1);
	return (0);
}

void	indexing(t_stack *list)
{
	int		i;
	t_stack	*tmp;
	t_stack	*next;

	if (!list)
		return ;
	tmp = list;
	while (tmp)
	{
		i = 0;
		next = list;
		while (next)
		{
			if (tmp->value > next->value)
				i++;
			next = next->next;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}

int	len(t_stack *list)
{
	int	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

int	check_error(char *str)
{
	if (is_empty(str) == 0 || is_valid(str) == 0 || ft_atoi(str) == 2147483648)
		return (0);
	return (1);
}
