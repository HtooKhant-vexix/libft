/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaung <htaung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:17:42 by htaung    #+#    #+#             */
/*   Updated: 2026/09/08 22:17:42 by htaung   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s) + 1;
	ptr = (char *)malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len);
	return (ptr);
}
