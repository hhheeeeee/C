/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:04:00 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/18 19:38:39 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
		write(1, str++, 1);
}

void	digit(long long int n_nb)
{
	char	a;

	if (n_nb == 0)
		return ;
	a = n_nb % 10 + '0';
	digit(n_nb / 10);
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long long int	n_nb;

	n_nb = (long long int) nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n_nb *= -1;
		digit(n_nb);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		digit(n_nb);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
