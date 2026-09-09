/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaung <htaung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:17:42 by htaung    #+#    #+#             */
/*   Updated: 2026/09/08 22:17:42 by htaung   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*get_word(char const *s, char c, size_t *i)
{
	size_t	start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

static void	free_arr(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_arr(char **arr, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		arr[j] = get_word(s, c, &i);
		if (!arr[j])
		{
			free_arr(arr, j);
			return (0);
		}
		j++;
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!fill_arr(arr, s, c, words))
		return (NULL);
	return (arr);
}
