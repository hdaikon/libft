/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:45:30 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:45:33 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dst_size)
		i++;
	while (src[j] && (i + j + 1) < dst_size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dst_size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
