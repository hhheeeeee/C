/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:37:51 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/06 17:19:18 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
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
//     printf("======ex02======\n");
// 		char src[10] = "gaeon";
// 		char dest0[20] = "hello ";
// 		char dest1[20] = "hello ";
// 		char src1[10] = "hi";
// 		char dest2[20] = "bonjour ";
// 		char dest3[20] = "bonjour ";
// 		printf("%s : %s\n", strcat(dest0, src), ft_strcat(dest1, src));
// 		printf("%s : %s\n", strcat(dest2, src1), ft_strcat(dest3, src1));
// 		
//		return (0);
// }
