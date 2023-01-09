/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:19:07 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:34:15 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex04======\n");
//     printf("-1: %d\n", ft_fibonacci(-5));
//     printf("0 : %d\n", ft_fibonacci(0));
//     printf("1 : %d\n", ft_fibonacci(1));
//     printf("55 : %d\n", ft_fibonacci(10));
// return (0);
// }
