/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:17:14 by danborys          #+#    #+#             */
/*   Updated: 2025/11/11 11:02:07 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	count;
	
	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	count = nmemb * size;
	ptr = malloc(count);
	if (!ptr)
		return (NULL);
	return ( ft_memset(ptr, 0, count));
}
