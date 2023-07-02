/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:35:46 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:25:48 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	only_low;
	int	str_count;

	only_low = 1;
	str_count = 0;
	while (str[str_count] != '\0')
	{
		if ((str[str_count] < 97 || str[str_count] > 122))
			only_low = 0;
		str_count++;
	}
	return (only_low);
}
/*
int	main()
{
	char ouioui[] ="yukuytre";
	printf("%d", ft_str_is_lowercase(ouioui));
}
*/
