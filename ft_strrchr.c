/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:06:26 by danborys          #+#    #+#             */
/*   Updated: 2025/11/10 15:29:35 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == (unsigned char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	if (s[len] == (unsigned char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
