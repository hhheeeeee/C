/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:09:36 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 12:34:58 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	base_index(char c, char *base, int base_len)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	if (i == base_len)
		return (-1);
	return (0);
}

int	str_idx(char *str, int sign, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign)
		return (sign);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	base_len;
	int	i;

	res = 0;
	base_len = 0;
	sign = str_idx(str, 1, 0);
	i = str_idx(str, 0, 0);
	if (checkbase(base, 0, 0))
	{
		while (base[base_len] != 0)
			base_len++;
		while (str[i] != '\0')
		{
			if (base_index(str[i], base, base_len) == -1)
				break ;
			res = res * base_len + base_index(str[i], base, base_len);
			i++;
		}
	}
	return (res * sign);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("======ex05======\n");
// 	char base[20] = "0123456789";
// 	char base1[20] = "01";
// 	char base2[20] = "0123456789ABCDEF";
// 	char base3[20] = "poneyvif";
// 	char base4[20] = "poneyviff";
// 	printf("%d\n", ft_atoi_base("4523816", base));
// 	printf("%d\n", ft_atoi_base("10001010000011100101000", base1));
// 	printf("%d\n", ft_atoi_base("450728", base2));
// 	printf("%d\n", ft_atoi_base("nonpeyvp", base3));
// 	printf("%d\n", ft_atoi_base("nonpeyvp", base4));
// 	printf("%d\n", ft_atoi_base("-2147483648", base));
// 	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", base1));
// 	printf("%d\n", ft_atoi_base("-80000000", base2));
// 	printf("%d\n", ft_atoi_base("-npppppppppp", base3));

// 	char base_sym[6] = {'\'', '\\', '"', '?', '!'};
// 	printf("%d vs %d\n", 88926, ft_atoi_base
// 	("\n\\\'\?\"\\\"\'\\", base_sym));
// 	printf("%d vs %d\n", 145062, ft_atoi_base("\rrcrdmddd", "mrdoc"));
// 	printf("%d vs %d\n", 2147483647, ft_atoi_base
// 	("\v1111111111111111111111111111111", "01"));
// 	printf("%ld vs %d\n", -2147483648, ft_atoi_base
// 	("\f-10000000000000000000000000000000", "01"));
// 	printf("%d vs %d\n", 123, ft_atoi_base("      --+-+-123abc", "0123456789"));
// 	printf("%d vs %d\n", 0, ft_atoi_base("      --+-aa+-123abc", "0123456789"));
// 	printf("%d vs %d\n", 911058099, ft_atoi_base
// 	("1839021837901472947", "0123456789"));

// 	return (0);
// }
