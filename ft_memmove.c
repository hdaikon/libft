/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:23:48 by hdaikon           #+#    #+#             */
/*   Updated: 2021/04/26 20:24:30 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
