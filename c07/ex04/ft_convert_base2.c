/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:04:47 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/17 16:07:57 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	len_nbr(long long decimal, long long len, int base_to_len);
char		*ft_atoi(char *res, int res_len, char *base_to, long long decimal);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	checkbase(char *base, int i)
{
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[++i] != 0)
	{
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
	}
	i = -1;
	while (base[++i] != 0)
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 32 || \
				(base[i] >= 9 && base[i] <= 13))
			return (0);
	}
	return (1);
}

int	str_idx(char *str, int sign, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign)
		return (sign);
	return (i);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	base_len;
	int	i;

	res = 0;
	base_len = 0;
	sign = str_idx(str, 1, 0);
	i = str_idx(str, 0, 0);
	while (base[base_len] != 0)
		base_len++;
	while (str[i] != '\0')
	{
		if (base_index(str[i], base) == -1)
			break ;
		res = res * base_len + base_index(str[i], base);
		i++;
	}
	return (res * sign);
}
