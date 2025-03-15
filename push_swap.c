/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:37:01 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/24 16:43:17 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting(t_stack **a, t_stack **b)
{
	indexing(*a);
	if (!is_sorted(*a))
	{
		if (len(*a) == 2)
			sort_2(a);
		else if (len(*a) == 3)
			sort_3(a);
		else if (len(*a) == 4)
			sort_4(a, b);
		else if (len(*a) == 5)
			sort_5(a, b);
		if (len(*a) > 5)
			sort_100_500(a, b);
	}
}

t_stack	*remplire(t_stack *a, char **all)
{
	int		i;
	long	nb;

	i = 0;
	nb = 0;
	while (all[i])
	{
		if (check_error(all[i]) == 0)
			ft_fail(all, a);
		nb = ft_atoi(all[i]);
		if (nb != 2147483648 && !is_dup(a, nb))
		{
			add_back(&a, nb);
			if (!a)
				ft_fail(all, a);
		}
		else
			ft_fail(all, a);
		i++;
	}
	return (a);
}

char	*main2(int ac, char **av)
{
	int		i;
	char	*str;

	i = 1;
	str = NULL;
	while (i < ac)
	{
		if (is_empty(av[i]) == 0)
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		str = ft_strjoin(str, av[i]);
		if (!str)
		{
			write(2, "Error\n", 6);
			free(str);
			exit(1);
		}
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	t_stack	*b;
	t_stack	*a;
	char	*str;
	char	**all;

	a = NULL;
	b = NULL;
	str = NULL;
	if (ac >= 2)
	{
		str = main2(ac, av);
		all = ft_split(str, ' ');
		free(str);
		if (!all)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		a = remplire(a, all);
		ft_freestr(all);
		ft_sorting(&a, &b);
		ft_free(a);
	}
}
