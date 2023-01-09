/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:21:48 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/17 20:22:49 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*ps;
	int				i;

	if (min >= max)
		return (0);
	ps = (int *)malloc(sizeof(int) * (max - min));
	if (ps == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		ps[i] = min;
		min++;
		i++;
	}
	return (ps);
}
// #include <stdio.h>
// int main(void)
// {
//     int i;
// 	int *arr;

// 	arr = ft_range(1,11);
// 	i = 0;
// 	while (arr[i])
// 		printf("%d ", arr[i++]);    

//     return (0);
// }
