/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:01:21 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/23 14:21:02 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char **argv, int m)
{
	int	n;

	n = 0;
	while (argv[m][n] != 0)
		n++;
	write(1, argv[m], n);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	m;

	m = 1;
	while (m < argc)
	{
		print_arg(argv, m);
		m++;
	}
	return (0);
}
