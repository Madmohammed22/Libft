/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 04:01:42 by root              #+#    #+#             */
/*   Updated: 2023/10/04 15:08:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	f_strlen(const char *str)
{
	const char	*p_str;

	p_str = str;
	while (*p_str)
		p_str++;
	return (p_str - str);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		total_length;
	size_t		dest_len;
	const char	*s;

	if ((!src || !dest) && !n)
		return (0);
	s = src;
	dest_len = 0;
	while (*(dest + dest_len) && (dest_len < n))
		dest_len++;
	if (dest_len < n)
		total_length = dest_len + f_strlen(s);
	else
		return (n + f_strlen(s));
	while (*s && ((dest_len + 1) < n))
	{
		*(dest + dest_len) = *s++;
		dest_len++;
	}
	*(dest + dest_len) = '\0';
	return (total_length);
}
