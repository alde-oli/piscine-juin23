/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:32:51 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/20 13:19:51 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (x < nb)
	{
		if ((nb % x) == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
int main()
{
	printf("%d", ft_is_prime(1));
}
*/
