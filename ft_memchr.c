/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:47:50 by danborys          #+#    #+#             */
/*   Updated: 2025/10/28 11:04:35 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (src1[i] == (unsigned char)c)
		{
			return (&src1[i]);
		}
		i++;
	}
	return (NULL);
}
