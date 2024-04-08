/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:59:58 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/08 10:59:23 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet;

	reverse_alphabet = 'z';
	while (reverse_alphabet >= 'a')
	{
		write (1, &reverse_alphabet, 1);
		reverse_alphabet--;
	}
}
/*
 int main()
 {
 	ft_print_reverse_alphabet();
 }
*/
