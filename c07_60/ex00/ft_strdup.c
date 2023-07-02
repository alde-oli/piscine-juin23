/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:28:55 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/27 04:45:27 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	dest = (char *) malloc(sizeof(char) * (len + 1));
	len = 0;
	while (src[len] != 0)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = 0;
	return (dest);
}
/*
//int	main()
//{
//	char	oui[] = "squalala zouboulou skididi papa bim bam boum cornichon au dd";
//	char	*ouicpy = ft_strdup(oui);
//	printf("%s", ouicpy);
//	free(ouicpy);
//}
*/
