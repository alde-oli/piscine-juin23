/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:59:46 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/29 21:05:12 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (charset[j] == c)
		{
			return (1);
		}
		j += 1;
	}
	return (0);
}

int	str_nbr(char *str, char *charset)
{
	int	i;
	int	nbr;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		while (is_charset(charset, str[i]) == 1 && str[i])
		{
			i += 1;
		}
		while (is_charset(charset, str[i]) == 0 && str[i])
		{
			i += 1;
		}
		if (is_charset(charset, str[i - 1]) == 0
			&& (is_charset(charset, str[i]) == 1 || str[i] == '\0'))
		{
			nbr += 1;
		}
	}
	nbr += 1;
	return (nbr);
}

int	char_nbr(char *str, char *charset, int i)
{
	int	nbr;

	nbr = 0;
	while (is_charset(charset, i) == 0 && str[i])
	{
		nbr += 1;
		i += 1;
	}
	nbr += 1;
	return (nbr);
}

char	*copy_paste(char *str, char *charset, int i)
{
	char	*tab2;
	int		j;

	j = 0;
	tab2 = malloc (sizeof(char) * char_nbr(str, charset, i));
	while (is_charset(charset, str[i]) == 0 && str[i])
	{
		tab2[j] = str[i];
		j += 1;
		i += 1;
	}
	tab2[j] = '\0';
	return (tab2);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tab = malloc(sizeof(*tab) * (str_nbr(str, charset) + 1));
	while (str[j])
	{
		while (is_charset(charset, str[j]) == 1 && str[j])
		{
			j += 1;
		}
		if (str[j])
		{
			tab[i] = copy_paste(str, charset, j);
			i += 1;
		}
		while (is_charset(charset, str[j]) == 0 && str[j])
		{
			j += 1;
		}
	}
	tab[i] = 0;
	return (tab);
}
/*
int	main(void)
{
	char *charset = "#*@";
	char *str = "**pouetpouet**#coucou@##bonjour***#@*#@quoi#*feur#@*#*@";
	char **tab;
	int  i = 0;

	tab = ft_split(str, charset);
	while (tab[i] != 0)
	{
		printf ("%s\n", tab[i]);
		i += 1;
	}
	printf ("%s\n", tab[i]);
	return (0);
}
*/
