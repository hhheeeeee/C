/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:09:45 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/11 10:53:03 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	src_size = 0;
	while (src[src_size] != 0)
		src_size++;
	if (size < 1)
		return (src_size);
	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	destt[10];
// 	char	strr[10] = "hello";
// 	char	strr1[10] = "to";
// 	printf("정답\t출력\n");
// 	printf("%lu\t%u\n", strlcpy(destt, strr, 0), ft_strlcpy(destt, strr, 0));
// 	printf("%lu\t%u\n", strlcpy(destt, strr1, 2), ft_strlcpy(destt, strr1, 2));
// }
