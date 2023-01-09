/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:28 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/13 17:06:56 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	d_len = ft_len(dest);
	s_len = ft_len(src);
	if (d_len >= size)
		return (size + s_len);
	size -= (d_len + 1);
	while (src[i] && size)
	{
		dest[d_len + i] = src[i];
		i++;
		size--;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     printf("======ex05======\n");
// 	char src[10] = "gaeon";
// 	char src1[10] = "gaeon";
// 	char dest[10] = "hello";
// 	char dest1[10] = "hello";

// 	char src2[10] = "42";
// 	char src22[10] = "42";
// 	char dest2[10] = "hi";
// 	char dest22[10] = "hi";

// 	char src3[10] = "4242";
// 	char src33[10] = "4242";
// 	char dest3[10] = "hihihi";
// 	char dest33[10] = "hihihi";

// 	char src4[10] = "42seoul";
// 	char src44[10] = "42seoul";
// 	char dest4[10] = "";
// 	char dest44[10] = "";
// 	printf("%lu %u", strlcat(dest, src, 10), ft_strlcat(dest1, src1, 10));
// 	printf(" | d = 5, s = 5, size = 10\n");
// 	printf("%lu %u", strlcat(dest2, src2, 5), ft_strlcat(dest22, src22, 5));
// 	printf("| d = 2, s = 2, size = 5\n");
// 	printf("%lu %u", strlcat(dest3, src3, 1), ft_strlcat(dest33, src33, 1));
// 	printf("| d = 6 s = 4, size = 1\n");
// 	printf("%lu %u", strlcat(dest4, src4, 6), ft_strlcat(dest44, src44, 6));
// 	printf(" | d = 0, s = 7, size = 6\n");	
// return (0);
// }
