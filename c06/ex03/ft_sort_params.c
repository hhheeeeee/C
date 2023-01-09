/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:11:01 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/13 16:27:37 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

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

int	main(int argc, char **argv)
{
	int		start;
	int		i;
	char	*temp;

	start = 1;
	if (argc > 1)
	{
		while (start < argc)
		{
			i = start + 1;
			while (i < argc)
			{
				if (ft_strcmp(argv[start], argv[i]) > 0)
				{
					temp = argv[start];
					argv[start] = argv[i];
					argv[i] = temp;
				}
				i++;
			}
			start++;
		}
	}
	ft_putstr(argv);
	return (0);
}
