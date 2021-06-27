/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:42:03 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:42:07 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			d[i] = s[i];
			return (&d[i + 1]);
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
