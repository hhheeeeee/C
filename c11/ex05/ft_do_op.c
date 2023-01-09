/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:54:34 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/20 16:59:41 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int	ft_cal(int x, char *op, int y)
{
	int	i;
	int	(*f[5])(int, int);

	f[0] = &add;
	f[1] = &sub;
	f[2] = &mul;
	f[3] = &div;
	f[4] = &mod;
	i = 1;
	if (op[0] == '+')
		i = f[0](x, y);
	else if (op[0] == '-')
		i = f[1](x, y);
	else if (op[0] == '*')
		i = f[2](x, y);
	else if (op[0] == '/')
		i = f[3](x, y);
	else if (op[0] == '%')
		i = f[4](x, y);
	return (i);
}

int	is_op(char *op)
{
	if (!ft_strlen(op))
		return (0);
	if (!(*op == '+' || *op == '-' || *op == '*' || *op == '/' || *op == '%'))
		return (0);
	return (1);
}

void	ft_do_op(char *x, char *op, char *y)
{
	int	left;
	int	right;

	left = ft_atoi(x);
	right = ft_atoi(y);
	if (!(is_op(op)))
		ft_putstr("0\n");
	else if (op[0] == '/' && right == 0)
		ft_putstr("Stop : division by zero\n");
	else if (op[0] == '%' && right == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(ft_cal(left, op, right));
		ft_putstr("\n");
	}
}

int	main(int ac, char *av[])
{
	if (ac == 4)
		ft_do_op(av[1], av[2], av[3]);
	return (0);
}
