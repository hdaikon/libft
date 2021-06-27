/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 21:56:49 by hdaikon           #+#    #+#             */
/*   Updated: 2021/04/20 21:57:00 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*result;

	i = 0;
	ch = (unsigned char)c;
	result = (unsigned char *)b;
	while (i < len)
	{
		result[i] = ch;
		i++;
	}
	return (b);
}
