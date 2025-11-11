/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:30:43 by danborys          #+#    #+#             */
/*   Updated: 2025/11/11 17:47:10 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains_char(char c, char const *set)
{
	size_t	i;
	
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

size_t	get_final_chr_count(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;
	
	count = 0;
	i = 0;
	while (s1[i])
	{
		if (contains_char(s1[i], set) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char *ptr;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1 == "")
		return (ft_strdup(""));
	ptr = malloc(get_final_chr_count(s1, set) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (contains_char(s1[i], set) == 0)
		{
			ptr[j] = s1[i];
			i++;
			j++;
		} 
		else
		{
			i++;	
		}
	}
	return (ptr);
}
