/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:52:20 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/20 12:59:19 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 0)
	{
	result = result * nb;
	power--;
	}
	return (result);
}
/*
int main()
{
	printf("%d", ft_iterative_power(-3, 0));
}
*/
