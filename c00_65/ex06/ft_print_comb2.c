/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:24:13 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/08 17:18:41 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ecriture_nombre(char comb1, char comb2, char comb3, char comb4)
{
	char	oui;

	write(1, &comb1, 1);
	write(1, &comb2, 1);
	write(1, " ", 1);
	write(1, &comb3, 1);
	write(1, &comb4, 1);
	oui = '9';
	if (comb4 == oui && comb3 == oui && comb2 == oui && comb1 == oui)
	{
	}
	else
	{
		write (1, ", ", 2);
	}
}

void	increment_comb2(char comb1, char comb2, char comb3, char comb4)
{
	while (comb1 <= '9')
	{
		while (comb2 <= '9')
		{
			while (comb3 <= '9')
			{
				while (comb4 <= '9')
				{
					ecriture_nombre(comb1, comb2, comb3, comb4);
					comb4++;
				}
				comb3++;
				comb4 = '0';
			}
			comb2++;
			comb3 = '0';
		}
		comb1++;
		comb2 = '0';
	}
}

void	ft_print_comb2(void)
{
	char	comb1;
	char	comb2;
	char	comb3;
	char	comb4;

	comb1 = '0';
	comb2 = '0';
	comb3 = '0';
	comb4 = '0';
	increment_comb2(comb1, comb2, comb3, comb4);
}
/*
int	main()
{
	ft_print_comb2();
}
*/
