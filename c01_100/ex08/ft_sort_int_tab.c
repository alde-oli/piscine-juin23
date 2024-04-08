/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-oli <alde-oli@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:19:28 by alde-oli          #+#    #+#             */
/*   Updated: 2023/06/11 07:24:03 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *tab, int *x, int *y)
{
	int	temp;

	temp = tab[*x];
	tab[*x] = tab[*y];
	tab[*y] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	changement;

	x = 0;
	changement = 1;
	while (changement == 1)
	{
		changement = 0;
		x = 0;
		while (x < (size - 1))
		{
			y = x + 1;
			if (tab[x] > tab[y])
			{
				ft_swap(tab, &x, &y);
				changement = 1;
			}
			else
			{
			}
			x++;
		}
	}
}
/*
int main()
{
	int tab[] = {3, 5, 1, 8, 4, 7, 1, 5, 2, 6, 8, 4, 2, 2, 2, 8};
	ft_sort_in_tab(tab, 16); 
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
	printf("%d", tab[6]);
    printf("%d", tab[7]);
    printf("%d", tab[8]);
    printf("%d", tab[9]);
    printf("%d", tab[10]);
    printf("%d", tab[11]);
    printf("%d", tab[12]);
    printf("%d", tab[13]);
    printf("%d", tab[14]);
    printf("%d", tab[15]);
	return 0;
}
*/
