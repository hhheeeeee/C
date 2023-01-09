/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:39:26 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:30:35 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("0 : %d\n", ft_iterative_factorial(-10));
//     printf("1 : %d\n", ft_iterative_factorial(0));
//     printf("1 : %d\n", ft_iterative_factorial(1));
//     printf("3628800 : %d\n", ft_iterative_factorial(10));

// return(0);
// }
