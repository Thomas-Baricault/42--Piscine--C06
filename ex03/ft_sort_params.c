/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaricau <tbaricau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:42:43 by tbaricau          #+#    #+#             */
/*   Updated: 2025/09/07 13:53:33 by tbaricau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_cmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 || *s2)
	{
		diff = *s1 - *s2;
		if (diff != 0)
		{
			return (diff);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (str_cmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}

void	print(int argc, char **argv)
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
	return ;
}

int	main(int argc, char **argv)
{
	sort(argc, argv);
	print(argc, argv);
	return (0);
}
