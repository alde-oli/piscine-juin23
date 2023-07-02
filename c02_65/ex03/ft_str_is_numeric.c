/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:35:46 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:24:10 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	only_num;
	int	str_count;

	only_num = 1;
	str_count = 0;
	while (str[str_count] != '\0')
	{
		if (str[str_count] < 48 || str[str_count] > 57)
			only_num = 0;
		str_count++;
	}
	return (only_num);
}
/*
int	main()
{
	char ouioui[] ="34567";
	printf("%d", ft_str_is_numeric(ouioui));
}
*/
