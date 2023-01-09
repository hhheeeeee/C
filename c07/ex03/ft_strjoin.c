/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:59:55 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/18 15:24:29 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != 0)
		len++;
	while (src[i] != 0)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	s_len;
	int	size1;

	size1 = size;
	len = 0;
	while (size > 0)
	{
		i = 0;
		while (strs[size - 1][i] != 0)
		{
			len++;
			i++;
		}
		size--;
	}
	s_len = 0;
	while (sep[s_len] != 0)
		s_len++;
	return (len + (s_len * (size1 - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		t_len;
	int		i;

	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	t_len = total_len(size, strs, sep);
	res = (char *)malloc(sizeof(char) * ((t_len + 1)));
	if (res == 0)
		return (0);
	*res = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1 && sep[0] != '\0')
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int main()
// {     
//     char *str_join[] = {"hello","my", "name","is", "gyuhong"};
//     char str_join_sep[10] = " ** ";
//     int size = 5;
//     printf("str = hello, my, name, is, gyuhong\t size = %d,
// 	sep = %s\n\n", size, str_join_sep);
//     printf("%s\n", ft_strjoin(size, str_join, str_join_sep));

//     printf("\n");
//     printf("case 1 : sep = ""\n");
//     char *str_join1[] = {"hello","my", "name","is", "gyuhong"};
//     char str_join_sep1[10] = "";
//     int size1 = 5;
//     printf("str = hello, my, name, is, gyuhong\t size = %d,'
// 	sep = %s\n\n", size1, str_join_sep1);
//     printf("%s\n", ft_strjoin(size1, str_join1, str_join_sep1));
//     printf("\n");

//     printf("\n\n");
//     printf("case 2 : not correct size\n");
//     char *str_join2[] = {"hello","my", "name","is", "gyuhong"};
//     char str_join_sep2[10] = "";
//     int size2 = 3;
//     printf("str = hello, my, name, is, gyuhong\t size = %d,
// 	sep = %s\n\n", size2, str_join_sep2);
//     printf("%s\n", ft_strjoin(size2, str_join2, str_join_sep2));
//     printf("\n");
// return (0);
// }
