/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:38:08 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/20 16:58:50 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	asc_order(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	dsc_order(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (asc_order(tab, length, f) == 1 || dsc_order(tab, length, f) == 1)
		return (1);
	return (0);
}
