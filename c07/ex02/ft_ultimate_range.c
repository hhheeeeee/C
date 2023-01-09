/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:25:27 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/17 17:51:12 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	diff = max - min;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * diff);
	if (!range)
		return (-1);
	while (min + i < max)
	{
		*(*(range) + i) = min + i;
		i++;
	}
	return (diff);
}
