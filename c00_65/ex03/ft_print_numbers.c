/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:02:42 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/08 11:11:24 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count_numbers;

	count_numbers = '0';
	while (count_numbers <= '9')
	{
		write(1, &count_numbers, 1);
		count_numbers++;
	}
}
/*
int main()
{
	ft_print_numbers();
}
*/
