/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:40:55 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/19 13:28:41 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct t_stack
{
	int				value;
	int				index;
	struct t_stack	*next;
}	t_stack;

void	ft_fail(char **all, t_stack *a);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char const *s);
char	*ft_strdup(const char *s);
char	**ft_split(char *s, char c);
long	ft_atoi(char *str);
int		is_empty(char *str);
int		is_number(char c);
int		is_valid(char *str);
void	ft_free(t_stack *list);
void	ft_freestr(char **str);
void	add_back(t_stack **lst, int data);
int		check_stack(t_stack *list);
int		check_error(char *str);
t_stack	*last_node(t_stack *list);
t_stack	*new_node(int nb);
int		is_sorted(t_stack *l);
int		is_dup(t_stack *lst, int num);
void	indexing(t_stack *list);
int		len(t_stack *list);
int		ft_max(t_stack *a);
int		find_pos_min(t_stack **list);
int		find_pos_max(t_stack *list);
int		decide(t_stack **stack_a);
//moves 
void	sa(t_stack **list);
void	sb(t_stack **list);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **list);
void	rb(t_stack **list);
void	rra(t_stack **list);
void	rrb(t_stack **list);
t_stack	*pushx(t_stack **a, t_stack **b);
t_stack	*swap_stack(t_stack *a);
t_stack	*rotatx(t_stack *a);
t_stack	*rrx(t_stack *a);
//sort
void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	sort_100_500(t_stack **a, t_stack **b);
void	from_b_to_a(t_stack **a, t_stack **b);
void	from_a_to_b(t_stack **a, t_stack **b, int i, int k);

#endif