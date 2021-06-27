/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:49:29 by hdaikon           #+#    #+#             */
/*   Updated: 2021/04/21 20:49:39 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
