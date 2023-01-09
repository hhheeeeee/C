/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:55:50 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 12:34:38 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen1(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	checkbase(char *base, int i, int k)
{
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	while (base[k] != 0)
	{
		if (base[k] == '-' || base[k] == '+')
			return (0);
		k++;
	}
	return (1);
}

void	changebase(char *base, long long int nb, long long int len)
{
	if (nb / len == 0)
	{
		write(1, &base[nb % len], 1);
		return ;
	}
	else
	{
		changebase(base, nb / len, len);
		write(1, &base[nb % len], 1);
	}
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	len;
	long long int	nb;

	len = (long long int)ft_strlen1(base);
	nb = (long long int)nbr;
	if (checkbase(base, 0, 0))
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		changebase(base, nb, len);
	}
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex04======\n");
// 		char base[20] = "0123456789";
// 		char base1[20] = "01";
// 		char base2[20] = "0123456789ABCDEF";
// 		char base3[20] = "poneyvif";
// 		char base4[20] = "poneyviff";
// 		int nbr = 0;
// 		int nbr1 = -2147483648;
//         int nbr2 = 2147483647;
// 		ft_putnbr_base(nbr, base); printf("\n");
// 		ft_putnbr_base(nbr, base1); printf("\n");
// 		ft_putnbr_base(nbr, base2); printf("\n");
// 		ft_putnbr_base(nbr, base3); printf("\n");
// 		 ft_putnbr_base(nbr, base4); printf("\n");
// 		ft_putnbr_base(nbr1, base); printf("\n");
// 		ft_putnbr_base(nbr1, base1); printf("\n");
// 		ft_putnbr_base(nbr1, base2); printf("\n");
// 		ft_putnbr_base(nbr1, base3); printf("\n");
// 		ft_putnbr_base(nbr1, base4); printf("\n");
//         ft_putnbr_base(nbr2, base); printf("\n");
// 		ft_putnbr_base(nbr2, base1); printf("\n");
// 		ft_putnbr_base(nbr2, base2); printf("\n");
// 		ft_putnbr_base(nbr2, base3); printf("\n");
// 		ft_putnbr_base(nbr2, base4); printf("\n");

//         return (0);
// }
