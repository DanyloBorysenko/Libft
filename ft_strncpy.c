/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:34:09 by danborys          #+#    #+#             */
/*   Updated: 2025/10/28 15:17:51 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (i < dsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < dsize)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
