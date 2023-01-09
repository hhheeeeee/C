/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:53:05 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/17 15:46:02 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*p;
	int		i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	p = (char *)malloc(sizeof(char) * (src_len + 1));
	if (p == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%s\n", ft_strdup("hi~"));
//     return (0);

// }
