/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:52:36 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:18:15 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_file(char *file_path);

int	main(int argc, char **argv)
{
	(void)argc;
	if (!valid_file(argv[1]))
		return (0);
	return (1);
}
