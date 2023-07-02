/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:50:55 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/22 12:29:01 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;

	(void)argc;
	n = 0;
	while (argv[0][n] != 0)
		n++;
	write(1, argv[0], n);
	write(1, "\n", 1);
	return (0);
}
