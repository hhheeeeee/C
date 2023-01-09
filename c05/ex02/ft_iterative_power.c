/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:55:04 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:32:24 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex02======\n");
//     printf("0 : %d\n", ft_iterative_power(-1, -1));
//     printf("0 : %d\n", ft_iterative_power(-1, 2));
//     printf("1 : %d\n", ft_iterative_power(0, 0));
//     printf("4 : %d\n", ft_iterative_power(2, 2));
//     printf("-251658240 : %d\n", ft_iterative_power(12, 12));

//     printf("0 ^ -1 = 0 --> %d\n", ft_iterative_power(0,-1));
// 	printf("0 ^ 0 = 1 --> %d\n", ft_iterative_power(0,0));
// 	printf("1 ^ 0 = 1 --> %d\n", ft_iterative_power(1,0));
// 	printf("2 ^ 5 = 32 --> %d\n", ft_iterative_power(2,5));
// 	printf("-3 ^ 3 = -27 --> %d\n", ft_iterative_power(-3,3));
// return (0);
// }
