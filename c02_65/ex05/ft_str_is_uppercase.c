/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:32:29 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:26:13 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	only_up;
	int	str_count;

	only_up = 1;
	str_count = 0;
	while (str[str_count] != '\0')
	{
		if (str[str_count] < 65 || str[str_count] > 90)
			only_up = 0;
		str_count++;
	}
	return (only_up);
}
/*
int	main()
{
	char ouioui[] ="E";
	printf("%d", ft_str_is_uppercase(ouioui));
}
*/
