/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:34:16 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/08 14:44:45 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affichage_nombre(char comb1, char comb2, char comb3)
{
	write(1, &comb1, 1);
	write(1, &comb2, 1);
	write(1, &comb3, 1);
	if (comb1 != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	comb1;
	char	comb2;
	char	comb3;

	comb1 = '0';
	while (comb1 <= '7')
	{
		comb2 = comb1 + 1;
		while (comb2 <= '8')
		{
			comb3 = comb2 + 1;
			while (comb3 <= '9')
			{
				affichage_nombre(comb1, comb2, comb3);
				comb3++;
			}
			comb2++;
		}
		comb1++;
	}
}
/*
int main()
{
	ft_print_comb();
}
*/
