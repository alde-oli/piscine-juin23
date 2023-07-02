/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:38:59 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/26 17:47:22 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_newline()
{
	write(1, "\n", 1);
}

void	writenbr(int nb)
{
	char	digit;

	if (nb < 0)
		digit = -1 * (nb % 10) + 48;
	else
		digit = nb % 10 + 48;
	nb /= 10;
	if (nb != 0)
		writenbr(nb);
	write(1, &digit, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (?)
	{
		write (1, par[i].str, par[i].size);
		newline();
		writenbr(par[i].size);
		newline();
		write (1, par[i].copy, par[i].size);
		newline();
	}
}
