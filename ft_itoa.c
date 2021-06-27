/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaikon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:41:40 by hdaikon           #+#    #+#             */
/*   Updated: 2021/05/14 20:41:46 by hdaikon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_sing(int n)
{
	int		numlen;

	numlen = 0;
	if (n == 0)
	{
		numlen = 1;
	}
	if (n < 0)
	{
		numlen++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_len_sing(n);
	result = malloc(sizeof (char) * (i + 1));
	if (result == NULL)
		return (NULL);
	result[i] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	i--;
	while (i >= 0 && n != 0)
	{
		result[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (result);
}
