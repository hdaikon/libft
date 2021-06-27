/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:46:43 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:46:48 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_char (char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	finish;

	i = 0;
	start = 0;
	finish = ft_strlen(s1);
	while (s1[start] && ft_char(s1[start], set))
		start++;
	while (finish > start && ft_char(s1[finish - 1], set))
		finish--;
	result = malloc(sizeof(char) * (finish - start + 1));
	if (result == NULL)
		return (NULL);
	while (start < finish)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
