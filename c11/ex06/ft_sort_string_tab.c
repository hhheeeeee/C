/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:10:29 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/20 17:06:29 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		start;
	int		i;
	char	*temp;

	start = 0;
	while (tab[start] != 0)
	{
		i = start + 1;
		while (tab[i] != 0)
		{
			if (ft_strcmp(tab[start], tab[i]) > 0)
			{
				temp = tab[start];
				tab[start] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		start++;
	}
}
