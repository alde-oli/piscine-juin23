/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:34:34 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/24 15:56:06 by alde-oli         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		x;
	int		changement;
	char	*caca;

	changement = 1;
	while (changement == 1)
	{
		changement = 0;
		x = 1;
		while (x < (size))
		{
			if (ft_strcmp(tab[x], tab[x + 1]) > 0)
			{
				caca = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = caca;
				changement = 1;
			}
			x++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	m;

	ft_sort_int_tab(argv, (argc - 1));
	m = 1;
	while (m < argc)
	{
		print_arg(argv, m);
		m++;
	}
}
