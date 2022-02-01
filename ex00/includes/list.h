/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:08:52 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 03:12:36 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_info
{
	int		fd;
	char	*alpha;
}	t_info;

typedef struct s_list
{
	int				value;
	char			c;
	struct s_list	*next;
}	t_list;

typedef struct s_index
{
	t_list	*begin;
	t_list	*end;
}	t_index;

void	ft_list_push_front(t_index *index_key, int value, char c);
void	ft_list_push_back(t_index *index_key, int value, char c);
void	ft_free_list(t_index *index_key);
t_list	*ft_create_list(int value, char c);

#endif
