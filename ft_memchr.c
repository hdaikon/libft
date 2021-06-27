/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:56:33 by hdaikon           #+#    #+#             */
/*   Updated: 2021/04/26 21:56:42 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	x;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == x)
			return (src + i);
		i++;
	}
	return (NULL);
}
