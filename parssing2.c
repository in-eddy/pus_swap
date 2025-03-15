/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:49:12 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/17 16:35:15 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup(t_stack *lst, int num)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->value == num)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	check_stack(t_stack *list)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp = list;
	while (tmp && tmp->next)
	{
		tmp1 = tmp->next;
		while (tmp1 && tmp1->next)
		{
			if (tmp->value == tmp1->value)
				return (0);
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

int	is_empty(char *str)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			k++;
		i++;
	}
	if (i == 0 || k == i)
		return (0);
	return (1);
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (i == 1 && !is_number(str[i]))
		return (0);
	while (str[i] && is_number(str[i]))
		i++;
	if (ft_strlen(str) == i)
		return (1);
	return (0);
}
