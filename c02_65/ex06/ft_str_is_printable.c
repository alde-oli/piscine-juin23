/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:36:03 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:28:26 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	only_print;
	int	str_count;

	only_print = 1;
	str_count = 0;
	while (str[str_count] != '\0')
	{
		if (str[str_count] < 32 || str[str_count] == 127)
			only_print = 0;
		str_count++;
	}
	return (only_print);
}
/*
int	main()
{
	char ouioui[] ="ghjr gjrh";
	printf("%d", ft_str_is_printable(ouioui));
}
*/
