/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:21:01 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/29 21:03:58 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	writenbr(int nbr, int b, char *base)
{
	char	digit;

	if (nbr < 0)
		digit = base[-1 * (nbr % b)];
	else
		digit = base[nbr % b];
	nbr /= b;
	if (nbr != 0)
		writenbr(nbr, b, base);
	write(1, &digit, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	if (check_base(base))
	{
		b = ft_strlen(base);
		if (nbr < 0)
			write (1, "-", 1);
		writenbr(nbr, b, base);
	}
}
/*
int main()
{
	char *base = "0123456789";
	ft_putnbr_base(10, base);
}
*/
