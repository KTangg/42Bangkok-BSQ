/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:31:29 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 04:14:14 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "str_utility.h"
#include "file_utility.h"
#include <stdlib.h>
// Read each line and Calculate neighbors
int	extract_file(t_info *info, t_index **index_key, int **max)
{
	int		n_row;

	if (!valid_first_line(info, &n_row))
		return (0);
	*index_key = (t_index *)malloc(sizeof(t_index) * n_row);
	/*if (!valid_each_line(info, n_row, *index_key, max))
	{
		free(*index_key);
		return (0);
	}*/
	return(1);
}
// Try to read file, compute, write answer down
int	process_file(t_info *info)
{
	int	*max;
	t_index	*index_key;

	if (!extract_file(info, &index_key, &max))
	{
		free(info->alpha);
		free(index_key);
		return (0);
	}
	//write_down(fd, index_key);
	free(max);
	free(info->alpha);
	//free_index(index_key);
	return (1);
}
// Try to open file with read and write permission
// After Process close the file.
int	valid_file(char *file_path)
{
	t_info	*info;	

	info = (t_info *)malloc(sizeof(t_info) * 1);
	info->fd = open(file_path, O_RDWR);
	info->alpha = NULL;
	if (info->fd < 0)
	{
		ft_putstr(INVALID);
		free(info);
		return (0);
	}
	if (!process_file(info))
	{
		ft_putstr(INVALID);
		free(info);
		return (0);
	}
	if (close(info->fd) < 0)
	{
		ft_putstr(INVALID);
		free(info);
		return (0);
	}
	return (1);
}
