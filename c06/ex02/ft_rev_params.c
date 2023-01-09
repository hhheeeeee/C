/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:11 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/13 16:21:26 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (argc - 1 != 0)
		{
			j = 0;
			while (argv[argc - 1][j] != 0)
			{
				write(1, &argv[argc - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
