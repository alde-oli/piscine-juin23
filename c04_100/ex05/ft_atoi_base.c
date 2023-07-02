/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:41:29 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/29 20:26:24 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	pwr(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	return (nb * pwr(nb, power - 1));
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	b_indx(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

void	skip_whitespaces_is_neg(char *str, int *j, int *neg)
{
	while ((str[*j] == ' ' || str[*j] == '\t')
		|| (str[*j] == '\n' || str[*j] == '\v')
		|| (str[*j] == '\f' || str[*j] == '\r'))
		*j += 1;
	while (str[*j] == '+' || str[*j] == '-')
	{
		if (str[*j] == '-')
			*neg = *neg * (-1);
		*j += 1;
	}	
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	str_len;
	int	r;
	int	j;
	int	neg;

	r = 0;
	j = 0;
	neg = 1;
	base_len = ft_strlen(base);
	str_len = ft_strlen(str);
	skip_whitespaces_is_neg(str, &j, &neg);
	while (j < str_len && b_indx(str[j], base) != -1)
	{
		r = r + b_indx(str[j], base) * pwr(base_len, (str_len - j - 1));
		j++;
	}
	return (neg * r);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi_base(av[1], av[2]));
}
*/
