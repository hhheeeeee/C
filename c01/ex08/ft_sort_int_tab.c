/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:48:49 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:07 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	i;

	start = 0;
	while (start < size - 1)
	{
		i = start + 1;
		while (i < size)
		{
			if (tab[start] > tab[i])
				ft_swap(&tab[start], &tab[i]);
			i++;
		}
		start++;
	}
}
