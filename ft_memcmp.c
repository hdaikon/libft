/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:40:09 by hdaikon           #+#    #+#             */
/*   Updated: 2021/04/27 21:40:35 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*o;
	const unsigned char	*d;
	size_t				i;

	o = s1;
	d = s2;
	i = 0;
	while (i < n)
	{
		if (o[i] != d[i])
			return (o[i] - d[i]);
		i++;
	}
	return (0);
}
