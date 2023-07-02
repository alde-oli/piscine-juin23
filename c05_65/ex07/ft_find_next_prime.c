/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:42:00 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/21 18:30:38 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (2);
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	while ((x * x) <= nb && x < 46360)
	{
		if ((nb % x) == 0)
			return (ft_find_next_prime(nb + 2));
		x ++;
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_find_next_prime(2147483600));
}
*/
