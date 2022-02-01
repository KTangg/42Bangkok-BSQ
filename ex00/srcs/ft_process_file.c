/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:31:29 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 16:31:15 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>

int	extract_file(t_info *info, t_index **index_key, int **max)
{
	int	i;
	int	n_row;

	n_row = 0;
	i = 0;
	if (!valid_first_line(info, &n_row))
		return (0);
	ft_putstr(info->alpha);
	ft_putstr("\n");
	*index_key = (t_index *)malloc(sizeof(t_index) * (n_row + 1));
	while (i <= n_row)
	{
		index_key[0][i].begin = NULL;
		index_key[0][i++].end = NULL;
	}
	if (!valid_each_line(info, n_row, *index_key, max))
	{
		free(*index_key);
		return (0);
	}
	return(1);
}

void	process_file(t_info *info)
{
	int	*max;
	t_index	*index_key;

	max = NULL;
	index_key = NULL;
	if (!extract_file(info, &index_key, &max))
	{
		free(info->alpha);
		return ;
	}
	//write_down(fd, index_key);
	free(max);
	free(info->alpha);
	free_index(index_key);
}

int	valid_file(char *file_path)
{
	t_info	*info;	

	info = (t_info *)malloc(sizeof(t_info) * 1);
	info->fd = open(file_path, O_RDWR);
	info->alpha = NULL;
	info->col = 0;
	if (info->fd < 0)
	{
		ft_putstr(INVALID);
		free(info);
		return (0);
	}
	process_file(info);
	if (close(info->fd) < 0)
	{
		ft_putstr(INVALID);
		free(info);
		return (0);
	}
	ft_putstr("Stop bloody seg fault\n");
	return (1);
}
