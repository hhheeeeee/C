/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:52:03 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/06 17:18:59 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
//     printf("======ex00======\n");
// 		char s1[10] = "abcdefg ";
// 		char s2[10] = "abcdefg";
// 		char s3[10] = "   ";
// 		char s4[10] = "gdcxf";
// 		printf("%d %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
// 		printf("%d %d\n", strcmp(s3, s4), ft_strcmp(s3, s4));
//		
//		return (0);
// }