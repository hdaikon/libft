/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:46:27 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:46:30 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	int		j;

	if (*small == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (small[j] && big[i + j] && i + j < len
				   && big[i + j] == small[j])
				j++;
			if (small[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}
