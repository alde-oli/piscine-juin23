/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:58:09 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 17:30:27 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	str_count;

	str_count = 0;
	while (str[str_count] != '\0')
	{
		if (str[str_count] > 64 && str[str_count] < 91)
			str[str_count] = str[str_count] + 32;
		str_count++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "@#@il eTait une foIS 1 PEtIt reNARd!\n";
	unsigned int	compt_j;

	compt_j = 0;
	ft_strlowcase(str);
	while (str[compt_j] != '\0')
	{
		write(1, &str[compt_j], 1);
		compt_j++;
	}
	write(1, "\0", 1);
}
*/
