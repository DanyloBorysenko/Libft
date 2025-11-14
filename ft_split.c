/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danborys <borysenkodanyl@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:17:42 by danborys          #+#    #+#             */
/*   Updated: 2025/11/13 15:12:29 by danborys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_words_count(char const *s, char c)
{
	size_t	count;
	int		is_word;
	size_t	i;

	is_word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && is_word == 0)
		{
			count++;
			is_word = 1;
		}
		if (s[i] == c && is_word == 1)
			is_word = 0;
		i++;
	}
	return (count);
}

static char	*extract_word(char const *s, char c, size_t *start_ptr)
{
	size_t	i;
	size_t	j;

	i = *start_ptr;
	while (s[i] && s[i] == c)
		i++;
	j = 0;
	while (s[i + j] && s[i + j] != c)
		j++;
	*start_ptr = i + j;
	return (ft_substr(s, i, j));
}

static char	**free_all(char **ptr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words_count;
	size_t	start;
	size_t	*start_ptr;
	size_t	i;

	start = 0;
	start_ptr = &start;
	if (!s)
		return (NULL);
	words_count = get_words_count(s, c);
	ptr = malloc((words_count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		ptr[i] = extract_word(s, c, start_ptr);
		if (!ptr[i])
			return (free_all(ptr, i));
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
