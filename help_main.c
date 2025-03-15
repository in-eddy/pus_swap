/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:34:24 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/24 16:20:29 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libc.h>

void	ft_fail(char **all, t_stack *a)
{
	ft_free(a);
	ft_freestr(all);
	write(2, "Error\n", 6);
	exit (1);
}
