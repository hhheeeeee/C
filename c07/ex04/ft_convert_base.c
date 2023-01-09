/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:51:31 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/17 16:00:57 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkbase(char *base, int i);
int	str_idx(char *str, int sign, int i);
int	base_index(char c, char *base);
int	ft_atoi_base(char *str, char *base);

long long	len_nbr(long long decimal, long long len, int base_to_len)
{
	if (decimal == 0)
		return (1);
	if (decimal < 0)
	{
		len++;
		decimal *= -1;
	}
	while (decimal > 0)
	{
		len++;
		decimal /= base_to_len;
	}
	return (len);
}

char	*ft_atoi(char *res, int res_len, char *base_to, long long decimal)
{
	int	base_len;

	base_len = 0;
	while (base_to[base_len] != 0)
		base_len++;
	res[res_len] = '\0';
	res_len--;
	if (decimal < 0)
	{
		res[0] = '-';
		decimal *= -1;
	}
	if (decimal == 0)
		res[0] = base_to[0];
	while (decimal > 0)
	{
		res[res_len] = base_to[decimal % base_len];
		decimal = decimal / base_len;
		res_len--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	decimal;
	int			base_to_len;
	int			res_len;
	char		*res;

	base_to_len = 0;
	if (checkbase(base_from, -1) == 0 || checkbase(base_to, -1) == 0)
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	while (base_to[base_to_len] != 0)
		base_to_len++;
	res_len = len_nbr(decimal, 0, base_to_len);
	res = (char *)malloc(sizeof(char) * (res_len + 1));
	if (res == 0)
		return (0);
	res = ft_atoi(res, res_len, base_to, decimal);
	return (res);
}
// #include <stdio.h>
// int main(void)
// {
//    printf("--------ex04---------\n");
//             char *str = "-1";
//             char *base_from = "0123456789";
//             char *base_to = "01";
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         {
//             char *str = "1";
//             char *base_from = "0123456789";
//             char *base_to = "01";
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         }
//         {
//             char *str = "-2";
//             char *base_from = "0123456789";
//             char *base_to = "01";
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         }
//         {
//             char *str = "2";
//             char *base_from = "0123456789";
//             char *base_to = "01";
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         {
//             char *str = "-2147483648";
//             char *base_from = "0123456789";
//             char *base_to = "01";
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         }
//         }
//         {
//             char *str = "101";
//             char *base_from = "";
//             char *base_to = "24";
//             printf("base error check\n\n");
//             printf("case 1.  base is empty or size of 1 \2n");
//             printf("base size = 0\n");
//             printf("result = ");
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         }
//         {
//             char *str = "101";
//             char *base_from = "1";
//             char *base_to = "23";
//             printf("base size = 1\n");
//             printf("result = ");
//             printf("%s\n", ft_convert_base(str, base_from, base_to));
//         }
//     {
//         char *str = "101";
//         char *base_from = "01";
//         char *base_to = "012345667";
//         printf("\ncase 2. base contains the same character twice\n\n");
//         printf("base = 012345667\n");
//         printf("result = ");
//         printf("%s\n", ft_convert_base(str, base_from, base_to));
//     }
//     {
//         char *str = "101";
//         char *base_from = "01";
//         char *base_to = "-01234567";
//         printf("\ncase 3. base contains + or - \n\n");
//         printf("base = -01234567\n");
//         printf("result = ");
//         printf("%s\n", ft_convert_base(str, base_from, base_to));
//     }
//     {
//         char *str = "101";
//         char *base_from = "01";
//         char *base_to = "0123 4567";
//         printf("\ncase 4 whitespaces\n\n");
//         printf("base = 0123 4567\n");
//         printf("result = ");
//         printf("%s\n", ft_convert_base(str, base_from, base_to));
//     }

// return(0);
// }
