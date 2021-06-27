/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 22:09:16 by hdaikon           #+#    #+#             */
/*   Updated: 2021/04/27 22:09:22 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char) c && s[i])
	{
		i++;
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	}
	if ((char) c == s[i])
		return ((char *) &s[i]);
	return (NULL);
}
