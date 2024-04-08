/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 09:24:17 by rmousque          #+#    #+#             */
/*   Updated: 2023/06/24 17:38:42 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	megastrlen(char **strs, int size, int sizeplus)
{
	int	i;
	int	j;
	int	u;

	u = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			u = u + ft_strlen(strs[i]);
			j++;
		}
		u += sizeplus;
		i++;
	}
	return (u - sizeplus);
}

char	*pouetpouetcamambert(int size, char *copy, char **strs, char *sep)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		ft_strcpy(copy + k, strs[i]);
		k += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(copy + k, sep);
			k += ft_strlen(sep);
		}
		i++;
	}
	copy[k] = 0;
	return (copy);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*copy;
	int		i;
	int		k;
	int		a;

	if (size <= 0)
	{
		copy = (char *) malloc (sizeof(char));
		return (copy);
	}
	a = megastrlen(strs, size, ft_strlen(sep));
	copy = (char *) malloc(sizeof(char) * a);
	i = 0;
	k = 0;
	copy = pouetpouetcamambert(size, copy, strs, sep);
	return (copy);
}
/*
int	main()
{
	int		taille = 7;
	char	*src[] = {"coucou ", " quoicoubebou ", "squalala", "prout"};
	char	sep[] = "UwU";
	char	*cp = ft_strjoin(taille, src, sep);

	printf("%s", cp);
	free (cp);
}*/
