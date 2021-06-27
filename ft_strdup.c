/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:44:46 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:44:51 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dst == NULL)
		return (NULL);
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
