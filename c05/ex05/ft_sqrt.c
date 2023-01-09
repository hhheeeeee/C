/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:20:30 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:35:14 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i <= 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//         printf("======ex05======\n");
//         printf("0 : %d\n", ft_sqrt(-3));
//         printf("0 : %d\n", ft_sqrt(0));
// 		printf("1 : %d\n", ft_sqrt(1));
// 		printf("0 : %d\n", ft_sqrt(2));
// 		printf("10 : %d\n", ft_sqrt(100));
// 		printf("0 : %d\n", ft_sqrt(2147483647));
// return(0);
// }
