/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:21:57 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/14 19:45:05 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str)
{
	int	compt_x;

	compt_x = 0;
	if (96 < str[compt_x] && str[compt_x] < 123)
		str[compt_x] = str[compt_x] - 32;
	compt_x++;
	while (str[compt_x] != '\0')
	{
		if (((47 < str[compt_x - 1] && str[compt_x -1] < 58)
				|| (64 < str[compt_x - 1] && str[compt_x - 1] < 91)
				|| (96 < str[compt_x - 1] && str[compt_x - 1] < 123))
			&& 64 < str[compt_x] && str[compt_x] < 91)
				str[compt_x] = str[compt_x] + 32;
		if (!((47 < str[compt_x - 1] && str[compt_x -1] < 58)
				|| (64 < str[compt_x - 1] && str[compt_x - 1] < 91)
				|| (96 < str[compt_x - 1] && str[compt_x - 1] < 123))
			&& (96 < str[compt_x] && str[compt_x] < 123))
				str[compt_x] = str[compt_x] - 32;
		compt_x++;
	}
	return (str);
}

int	main()
{
	char	str[] = "#a MoUlInette esT unE pET1t3 5Alop%e UwU #w# #poi @uop!uio u U u";
	int	compt_j;
	ft_strcapitalize(str);
	compt_j = 0;
	while (str[compt_j] != '\0')
	{
		write(1, &str[compt_j], 1);
		compt_j++;
	}
	write(1, "\0", 1);
}

