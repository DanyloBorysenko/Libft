/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:06:56 by danborys          #+#    #+#             */
/*   Updated: 2025/11/10 13:23:16 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src1;
	unsigned char	*dest1;
	size_t			i;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	if (dest1 < src1)
	{
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
	}
	return (dest);
}
