/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:47:15 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:31:24 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex01======\n");
//     printf("0 : %d\n", ft_recursive_factorial(-10));
//     printf("1 : %d\n", ft_recursive_factorial(0));
//     printf("1 : %d\n", ft_recursive_factorial(1));
//     printf("3628800 : %d\n", ft_recursive_factorial(10));
// return(0);
// }
