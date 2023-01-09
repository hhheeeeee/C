/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:49:50 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/13 12:44:04 by seunghui         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (!(ft_is_prime(nb + i)))
		i++;
	return (nb + i);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("======ex07======\n");
//     printf("2 : %d\n", ft_find_next_prime(0));
//     printf("2 : %d\n", ft_find_next_prime(1));
//     printf("2 : %d\n", ft_find_next_prime(2));
//     printf("5 : %d\n", ft_find_next_prime(4));
//     printf("11 : %d\n", ft_find_next_prime(10));
//     printf("2147483647 : %d\n", ft_find_next_prime(2147483647));
// return (0);   
// }
