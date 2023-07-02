/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:09:22 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/26 17:47:19 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen (src);
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

t_stock_str	ft_init_t_stock_str(char *av)
{
	t_stock_str	oui;
	oui.size = ft_strlen(av);
	oui.str = av;
	oui.copy = ft_strdup(av);
	return (oui);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int	i;

	i = 0;
	tab = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac - 1));
	while (i < ac - 1)
	{
		tab[i] = ft_init_t_stock_str(av[i]);
		i++;
	}
	return (tab);
}
