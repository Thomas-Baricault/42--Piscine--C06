/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:42:43 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/01 13:55:51 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	length;

	i = 1;
	while (i < argc)
	{
		length = 0;
		while (argv[i][length])
			length++;
		write(1, argv[i++], length);
		write(1, "\n", 1);
	}
	return (0);
}
