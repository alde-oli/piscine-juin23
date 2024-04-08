/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivuila <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:56:34 by nkivuila          #+#    #+#             */
/*   Updated: 2023/06/11 22:16:07 by alde-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_extrimity_line(char char_a, char char_b, char char_c, int x)
{
	int	compt_x;

	compt_x = x - 2;
	ft_putchar(char_a);
	if (x >= 2)
	{
		while (compt_x != 0)
		{
			ft_putchar(char_b);
			compt_x--;
		}
		ft_putchar(char_c);
	}
	ft_putchar('\n');
}

void	print_body_line(char char_d, int x, int y)
{
	int	compt_x;
	int	compt_y;

	compt_x = x - 2;
	compt_y = y - 2;
	while (compt_y != 0)
	{
		ft_putchar(char_d);
		if (x >= 2)
		{
			while (compt_x != 0)
			{	
				ft_putchar(32);
				compt_x--;
			}
			ft_putchar(char_d);
		}
		ft_putchar('\n');
		compt_y--;
		compt_x = x - 2;
	}	
}

void	char_init(char *char_a, char *char_b, char *char_c, char *char_d)
{
	*char_a = 'A';
	*char_b = 'B';
	*char_c = 'C';
	*char_d = 'B';
}

void	char_is_negative(char *char_a, char *char_c, int *x, int *y)
{
	char	temp_char;

	if ((*x < 0 && *y > 0) || (*x > 0 && *y < 0))
	{
		temp_char = *char_a;
		*char_a = *char_c;
		*char_c = temp_char;
	}
}

void	rush(int x, int y)
{
	char	char_a;
	char	char_b;
	char	char_c;
	char	char_d;

	char_init(&char_a, &char_b, &char_c, &char_d);
	char_is_negative(&char_a, &char_c, &x, &y);
	if (x != 0 && y != 0)
	{
		if (x < 0)
			x = x * -1;
		if (y < 0)
			y = y * -1;
		print_extrimity_line(char_a, char_b, char_c, x);
		if (y > 1)
			print_body_line(char_d, x, y);
		if (y > 1)
			print_extrimity_line(char_c, char_b, char_a, x);
	}

}
