/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:12 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/06 17:19:24 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     printf("======ex03======\n");
// 		char src[10] = "gaeon";
// 		char dest0[20] = "hello ";
// 		char dest1[20] = "hello ";
// 		char src1[10] = "hello";
// 		char dest2[20] = "bonjour ";
// 		char dest3[20] = "bonjour ";
// 		printf("%s : %s\n", strncat(dest0, src, 8), ft_strncat(dest1, src, 8));
// 		printf("%s : %s\n", strncat(dest2, src1, 2), ft_strncat(dest3, src1, 2));
// 		
//		return (0);
// }
