/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:42:43 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/01 13:45:59 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;

	if (argc >= 1)
	{
		length = 0;
		while (argv[0][length])
			length++;
		write(1, argv[0], length);
		write(1, "\n", 1);
	}
	return (0);
}
