/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:21:41 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/02 21:24:40 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	print_line(char start, char mid, char last, int row)
{
	ft_putchar(start);
	while (--row > 1)
		ft_putchar(mid);
	if (row)
		ft_putchar(last);
}

void	rush(int row, int col)
{
	int	i;

	i = 0;
	if (col > 0 && row > 0)
	{
		while (i < col)
		{
			if (i == 0)
				print_line('o', '-', 'o', row);
			else if (i == col - 1)
				print_line('o', '-', 'o', row);
			else
				print_line('|', ' ', '|', row);
			write(1, "\n", 1);
			i++;
		}
	}
}
