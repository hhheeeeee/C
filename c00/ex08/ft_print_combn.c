/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 23:06:46 by seunghui          #+#    #+#             */
/*   Updated: 2022/09/29 04:24:24 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *arr, int n)
{
	write(1, arr, n);
	if (arr[0] != 10 - n + '0')
		write(1, ", ", 2);
}

void	ft_combn(int depth, int start, int n, char *arr)
{
	if (depth == n)
		ft_print(arr, n);
	else
	{
		while (start <= 9)
		{
			arr[depth] = start + '0';
			ft_combn(depth + 1, start + 1, n, arr);
			start++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_combn(0, 0, n, arr);
}
