/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:45:30 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/29 19:25:35 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenbr(int nb)
{
	char	digit;

	if (nb < 0)
		digit = -1 * (nb % 10) + 48;
	else
		digit = nb % 10 + 48;
	nb /= 10;
	if (nb != 0)
		writenbr(nb);
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	writenbr(nb);
}
/*
int main()
{
	ft_putnbr(-2147483648);
}
*/
