/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:34:42 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/06 12:16:14 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct stack
{
	int				n;
	int				i;
	struct stack	*next;
}	t_stack;

char		*checking(char *s1, char *s2);
char		*ft_strdup(char *s1);
int			ft_strlen(char *s);
char		*ft_strjoin(int size, char **strs, char *sep);
char		**ft_split(char *s, char c);
char		*ft_substr(char *s, int start, int len);
int			check(char *str);
int			ft_atoi(char *str, char **v);
void		param_handler(char **v, int c);
t_stack		*create_stack(int *lst, int len);
void		stacks(long *lst, int len, long *table, char **str);
void		free_stack(t_stack *stack);
void		sa(t_stack **stack_a, t_stack *node);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*ft_lstnew(long content);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack		*ft_lstnewb(void);
void		sb(t_stack **stack_b, t_stack *node);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rrb(t_stack **stack_b);
void		free_me(char **arr);
int			stack_order(t_stack *stack);
int			len(char *str);
void		ranks(t_stack **stack_a, t_stack **stack_b);
int			rank3(t_stack **stack_a);
void		rank5(t_stack **stack_a, t_stack **stack_b);
void		callo(char *str, int i);
int			max_value(t_stack *lst);
int			position_index(t_stack *stack, int num);
int			stack_order(t_stack *stack);
int			min_value(t_stack *lst);
int			max_value(t_stack *lst);
int			len_lst(t_stack *lst);
void		stack_len(t_stack **stack_a, int *list);
int			*get_list(t_stack *stack_a, int len);
void		sort_list(int *lst, int len);
void		indexing(t_stack **lst, int *arr, int len);
int			position(t_stack *stack, int num);
void		push_b(t_stack **stack_a, t_stack **stack_b, int n, int position);
void		to_a(t_stack **stack_a, t_stack **stack_b);
void		to_b(t_stack **stack_a, t_stack **stack_b, int chunks);
int			ascii(char *s1);
void		send_b(t_stack **stack_a, t_stack **stack_b);
void		chunks(t_stack **stack_a, t_stack **stack_b);
void		find_lowest(t_stack **stack_a, t_stack **stack_b, int *i, \
			int chunks);

#endif
