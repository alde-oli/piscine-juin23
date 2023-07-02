/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:54:46 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/15 19:15:11 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char s1[] = "ABcB", s2[] = "abcd", s3[] = "ABCB", s4[] = "ABcBABaa";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s4));
	printf("%d\n", strcmp(s1, s4));
	printf("%d\n", ft_strcmp(s2, s2));
	printf("%d\n", strcmp(s2, s2));
	printf("%d\n", ft_strcmp(s2, s3));
	printf("%d\n", strcmp(s2, s3));
}

