/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:13:43 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/06 17:43:47 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && str[i + j] != 0)
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     printf("\n----ex04----\n");
// 	char *d51 = "jungyekim want to go home";
// 	char *d52 = "jungyekim want to go home";
// 	char *s55 = "want";
// 	char *s555 = "";
// 	printf("haystack : jungyeki want to go home,");
// 	printf("needle : go ,empty needle\n");
// 	printf("%s   vs   %s",ft_strstr(d51, s55), strstr(d52, s55));
// 	printf(" : ft_strstr   vs   strstr\n");

// 	printf("%s   vs   %s", ft_strstr(d51, s555), strstr(d52, s555));
// 	printf(" : ft_strstr   vs   strstr\n");
// 	printf("각 문자열이 같아야 정답\n");

// 	char str[20] = "abcabcabcdabc";
// 	char to_find[20] = "abcd";
// 	char str1[20] = "hello hello";
// 	char to_find1[20] = "o h";
// 	printf("%s %s\n", strstr(str, to_find), ft_strstr(str, to_find));
// 	printf("%s %s\n", strstr(str1, to_find1), ft_strstr(str1, to_find1));	
// return (0);
// }
