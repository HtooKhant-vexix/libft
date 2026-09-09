/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaung <htaung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:17:42 by htaung    #+#    #+#             */
/*   Updated: 2026/09/08 22:17:42 by htaung   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len1 + 1);
	ft_strlcat(join, s2, len1 + len2 + 1);
	return (join);
}
