/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:17:25 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/11 09:09:46 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	strlen_counter;

	strlen_counter = 0;
	while (*str != '\0')
	{
		strlen_counter ++;
		str++;
	}
	return (strlen_counter);
}
/*
int main()
{
	char str[]  = "la longueur de ce string est de 34";
	int longueur_str = ft_strlen(str);
	printf("%d", longueur_str);
}
*/
