/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:10:06 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/11 11:01:58 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_addr(long long int new_char, int depth)
{
	if (depth == 16)
		return (0);
	else
	{
		print_addr(new_char / 16, depth + 1);
		write(1, &"0123456789abcdef"[(new_char % 16)], 1);
	}
	return (0);
}

int	print_hex(unsigned char *new_char, unsigned int new_size, unsigned int i)
{
	while (i < new_size)
	{
		write(1, &"0123456789abcdef"[new_char[i] / 16], 1);
		write(1, &"0123456789abcdef"[new_char[i] % 16], 1);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 1)
			write(1, " ", 1);
		write(1, "  ", 2);
		i++;
	}
	return (0);
}

int	print_char(unsigned char *new_char, unsigned int new_size, unsigned int i)
{
	while (i < new_size)
	{
		if (new_char[i] > 31 && new_char[i] < 127)
			write(1, &new_char[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*addr_char;
	unsigned char	*new_char;
	unsigned int	i;
	unsigned int	new_size;

	addr_char = (unsigned char *)addr;
	i = 0;
	if (size == 0)
		return (0);
	while (i <= size)
	{
		new_char = addr_char + i;
		print_addr((long long int)new_char, 0);
		write(1, ": ", 2);
		if (size - i >= 16)
			new_size = 16;
		else
			new_size = size - i;
		print_hex(new_char, new_size, 0);
		print_char(new_char, new_size, 0);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
