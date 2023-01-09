/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:48:06 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/06 15:39:31 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
