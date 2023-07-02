/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmousque <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 02:12:50 by rmousque          #+#    #+#             */
/*   Updated: 2023/06/21 17:56:34 by rmousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	v;
	int	neg;

	neg = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t')
		|| (str[i] == '\n' || str[i] == '\v')
		|| (str[i] == '\f' || str[i] == '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	v = 0;
	while (47 < str[i] && str[i] < 58)
	{
		v = v * 10;
		v = v + str[i] - '0';
		i++;
	}
	v = v * neg;
	return (v);
}
/*

int main(void)
{
	char	u[]= "  -+--9562 2509rr888";
	
	printf("%d", ft_atoi(u));
	atoi(u);
	return (0);
}*/
