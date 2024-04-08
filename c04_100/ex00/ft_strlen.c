/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:43:22 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/15 16:13:37 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
