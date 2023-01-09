/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:11:09 by seunghui          #+#    #+#             */
/*   Updated: 2022/09/28 22:49:24 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digit(int fst, int snd)
{
	ft_putchar(fst / 10 + '0');
	ft_putchar(fst % 10 + '0');
	write(1, " ", 1);
	ft_putchar(snd / 10 + '0');
	ft_putchar(snd % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	fst;
	int	snd;

	fst = 0;
	while (fst != 99)
	{
		snd = fst + 1;
		while (snd != 100)
		{
			ft_print_digit(fst, snd);
			if (fst != 98)
				write(1, ", ", 2);
			snd++;
		}
		fst++;
	}
}
