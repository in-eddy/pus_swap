/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:56:17 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/17 16:27:55 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *list)
{
	t_stack	*up;

	while (list)
	{
		up = list->next;
		free(list);
		list = up;
	}
	list = NULL;
}

void	ft_freestr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
}

t_stack	*last_node(t_stack *list)
{
	t_stack	*tmp;

	tmp = list;
	if (!list)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_stack	*new_node(int nb)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = nb;
	new->next = NULL;
	return (new);
}

void	add_back(t_stack **lst, int data)
{
	t_stack	*new;
	t_stack	*tmp;

	new = new_node(data);
	tmp = *lst;
	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = last_node(*lst);
	tmp->next = new;
}
