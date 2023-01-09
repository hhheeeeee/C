/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:10:08 by seunghui          #+#    #+#             */
/*   Updated: 2022/10/17 20:24:14 by seunghui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == str)
			return (0);
		i++;
	}
	return (1);
}

int	cnt_word(char *str, char *charset)
{
	int	i;
	int	wd;

	i = 0;
	wd = 0;
	while (str[i + 1] != '\0')
	{
		if (is_sep(str[i], charset) == 1 && is_sep(str[i + 1], charset) == 0)
			wd++;
		i++;
	}
	if (is_sep(str[i], charset) == 1)
		return (wd + 1);
	return (wd);
}

void	write_word(char *res, char *str, char *charset, int word_start)
{
	int	i;

	i = 0;
	while (is_sep(str[word_start + i], charset) == 1)
	{
		res[i] = str[word_start + i];
		i++;
	}
	res[i] = 0;
}

void	split(char **res, char *str, char *charset, int word)
{
	int	i;
	int	word_index;
	int	word_len;

	i = 0;
	word_index = 0;
	while (word_index < word)
	{
		if (is_sep(str[i], charset) == 0 && str[i] != 0)
			i++;
		else
		{
			word_len = 0;
			while (is_sep(str[i + word_len], charset) == 1)
				word_len++;
			res[word_index] = (char *)malloc(sizeof(char) * (word_len + 1));
			write_word(res[word_index], str, charset, i);
			word_index++;
			i = i + word_len;
		}
	}
	res[word] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		word;
	int		i;

	i = 0;
	word = cnt_word(str, charset);
	res = (char **)malloc(sizeof(char *) * (word + 1));
	*res = 0;
	if (res == NULL)
		return (0);
	while (str[i] != 0)
		i++;
	if (*charset == '\0')
	{
		res[0] = (char *)malloc(sizeof(char) * (i + 1));
		i = -1;
		while (str[++i] != 0)
			res[0][i] = str[i];
		res[0][i] = 0;
		res[1] = 0;
	}
	else
		split(res, str, charset, word);
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	printf("\n--ex05--\n\n");
// 	int	n = 0;
// 	char *str = " I:/ want one,. ;try ";
// 	char *charset = " :/,.;";
// 	char **out = ft_split(str, charset);
// 	while (out[n])
// 		printf("%s\n", out[n++]);
// return (0);
// }
