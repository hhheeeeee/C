/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:30:07 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/20 16:53:30 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * (length));
	if (res == 0)
		return (0);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
