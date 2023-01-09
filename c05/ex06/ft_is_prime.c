/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:44:22 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/13 12:42:26 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex06======\n");
//     printf("0 : %d\n", ft_is_prime(0));
//     printf("0 : %d\n", ft_is_prime(1));
//     printf("1 : %d\n", ft_is_prime(2));
//     printf("0 : %d\n", ft_is_prime(4));
//     printf("0 : %d\n", ft_is_prime(10));
//     printf("1 : %d\n", ft_is_prime(2147483647));
// return (0);
// }
