/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:44:20 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:44:24 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	result;
	char	flag;

	i = 0;
	result = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (flag == 0 && s[i] != c)
		{
			flag = 1;
			result++;
		}
		if (s[i] == c)
			flag = 0;
		i++;
	}
	return (result);
}

int	add_word(char **word, size_t j, const char *s, char c)
{
	size_t	len;
	size_t	offset;
	char	*result;

	len = 0;
	while (s[j] == c)
		j++;
	while (s[j + len] != c && s[j + len] != '\0')
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (-1);
	offset = j;
	while (len--)
	{
		result[j - offset] = s[j];
		j++;
	}
	result[j - offset] = '\0';
	*word = result;
	return ((int)j);
}

void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words_count;
	size_t	i;
	size_t	j;

	i = 0;
	words_count = ft_count(s, c);
	result = malloc(sizeof(char *) * (words_count + 1));
	if (result == NULL)
		return (result);
	j = 0;
	while (i < words_count)
	{
		j = add_word(&result[i], j, s, c);
		if (j == -1lu)
		{
			free_arr(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
