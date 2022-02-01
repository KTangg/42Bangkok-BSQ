/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utility_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:51:12 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:15:15 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

void	free_index(t_index *index_key)
{
	t_index	*buffer;

	buffer = index_key;
	while (index_key->begin != NULL)
	{
		ft_free_list(index_key);
		index_key++;
	}
	free(buffer);
}
