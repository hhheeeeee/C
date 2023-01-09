/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:32:35 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/02 22:16:58 by tmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int a, int b);

int	atoi(char *c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (c[i])
	{
		if ('0' <= c[i] && c[i] <= '9')
		{
			num *= 10;
			num += (c[i] - '0');
		}
		else
			return (0);
		if (num <= 0)
			return (0);
		i++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	row;
	int	col;

	if (argc == 3)
	{
	row = atoi(argv[1]);
	col = atoi(argv[2]);
	rush(row, col);
	}
	else
		return (0);
}
