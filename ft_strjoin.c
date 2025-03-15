/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:43:04 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/19 13:33:55 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*d;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!d)
		return (NULL);
	while (s1 && i < ft_strlen(s1))
		d[j++] = s1[i++];
	d[j] = ' ';
	j++;
	i = 0;
	while (s2 && i < ft_strlen(s2))
		d[j++] = s2[i++];
	d[j] = '\0';
	free(s1);
	return (d);
}
