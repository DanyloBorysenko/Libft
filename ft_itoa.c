/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:11:52 by danborys          #+#    #+#             */
/*   Updated: 2025/11/14 11:33:13 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	get_char_count(long n)
{
	int	char_count;

	char_count = 1;
	if (n < 0)
	{
		char_count++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		char_count++;
	}
	return (char_count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*ptr;
	int		char_count;

	nb = (long)n;
	char_count = get_char_count(nb);
	if (nb < 0)
		nb = -nb;
	ptr = malloc((char_count + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[char_count] = '\0';
	char_count--;
	while (nb >= 10)
	{
		ptr[char_count] = (nb % 10) + '0';
		char_count--;
		nb = nb / 10;
	}
	ptr[char_count] = nb + '0';
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
