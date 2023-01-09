/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:58:32 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/04 22:31:37 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	num;
	unsigned char	a;
	unsigned char	b;

	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			num = (unsigned char) str[i];
			a = num / 16;
			b = num % 16;
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[a], 1);
			write(1, &"0123456789abcdef"[b], 1);
		}
	}
}
