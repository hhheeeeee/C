/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:16:31 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:33:29 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex03======\n");
//     printf("0 : %d\n", ft_recursive_power(-1, -1));
//     printf("0 : %d\n", ft_recursive_power(-1, 2));
//     printf("1 : %d\n", ft_recursive_power(0, 0));
//     printf("4 : %d\n", ft_recursive_power(2, 2));
//     printf("-251658240 : %d\n", ft_recursive_power(12, 12));
// return(0);
// }
