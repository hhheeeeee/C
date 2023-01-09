/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:41:35 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/04 15:36:44 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase1(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase1(str);
	while (str[i + 1] != 0)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if ((str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || \
				(str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
