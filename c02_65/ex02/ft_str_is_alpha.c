/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:45:49 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:22:06 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	only_alpha;
	int	str_count;

	only_alpha = 1;
	str_count = 0;
	while (str[str_count] != '\0')
	{
		if (!((64 < str[str_count] && str[str_count] < 91)
				|| (96 < str[str_count] && str[str_count] < 123)))
			only_alpha = 0;
		str_count++;
	}
	return (only_alpha);
}
/*
int	main()
{
	char ouioui[] ="hgERTYy";
	printf("%d", ft_str_is_alpha(ouioui));
}
*/
