/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:32:08 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/06 17:19:06 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     printf("======ex01======\n");
// 		char s1[10] = "abcdefg ";
// 		char s2[10] = "abcdefg";
// 		char s3[10] = "   ";
// 		char s4[10] = "gdcxf";
// 		printf("%d : %d\n", strncmp(s1, s2, 6), ft_strncmp(s1, s2, 6));
// 		printf("%d : %d\n", strncmp(s1, s2, 7), ft_strncmp(s1, s2, 7));
// 		printf("%d :  %d\n", strncmp(s3, s4, 1), ft_strncmp(s3, s4, 1));
// 		
//		return (0);
// }
