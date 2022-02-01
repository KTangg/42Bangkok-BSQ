/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:52:36 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 18:49:12 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_file(char *file_path);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		//read_stdin();
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			valid_file(argv[i]);
			i++;
		}
	}
	return (1);
}
