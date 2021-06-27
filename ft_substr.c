/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:47:01 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:47:04 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!(s))
		return (NULL);
	if ((start >= ft_strlen(s)) || (len == 0))
		return (ft_calloc(1, sizeof(char)));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
