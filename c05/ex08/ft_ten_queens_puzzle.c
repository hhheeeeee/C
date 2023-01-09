/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:08:01 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/12 19:42:19 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		nb *= -1;
	return (nb);
}

int	is_valid(int *arr, int col, int row)
{
	int	idx;

	idx = 0;
	arr[col] = row;
	while (idx < col)
	{
		if ((arr[idx] == arr[col]) || (ft_abs(idx - col) \
					== ft_abs(arr[col] - arr[idx])))
			return (0);
		idx++;
	}
	return (1);
}

void	print_arr(int *arr, int idx)
{
	char	c;

	while (idx < 10)
	{
		c = arr[idx] + '0';
		write(1, &c, 1);
		idx++;
	}
	write(1, "\n", 1);
}

void	ten_queen(int *arr, int col, int row, int *p_cnt)
{
	if (col == 10)
	{
		*p_cnt += 1;
		print_arr(arr, 0);
	}
	else
	{
		row = 0;
		while (row < 10)
		{
			if (is_valid(arr, col, row))
			{
				arr[col] = row;
				ten_queen(arr, col + 1, row, p_cnt);
			}
			row++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[11];
	int	cnt;

	cnt = 0;
	ten_queen(arr, 0, 0, &cnt);
	return (cnt);
}
// #include <stdio.h>
// int main(void)
// {
//    printf("\n--ex08--\n");
//    printf("count : %d\n", ft_ten_queens_puzzle());
// return(0);
// }
