/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:49:53 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/20 16:05:13 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
// #include <stdio.h>
// int main(void)
// {
//         char str[100] = "2147483647";
// 		char str1[100] = "-2147483648";
// 		char str2[100] = "     0";
// 		char str3[100] = "++-+--0";
// 		char str4[100] = "    	++-+---+---+--123";
// 		char str5[100] = "	  ++--+---++++-123abc";
// 		printf("%d\n", ft_atoi(str));
// 		printf("%d\n", ft_atoi(str1));
// 		printf("%d\n", ft_atoi(str2));
// 		printf("%d\n", ft_atoi(str3));
// 		printf("%d\n", ft_atoi(str4));
// 		printf("%d\n", ft_atoi(str5));

//         return(0);
// }
