/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:20:50 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/22 12:36:28 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char **argv, int m)
{
	int	n;

	n = 0;
	while (argv[m][n] != 0)
	{
		n++;
	}
	write(1, argv[m], n);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	m;

	m = argc - 1;
	while (m > 0)
	{
		print_arg(argv, m);
		m--;
	}
}
