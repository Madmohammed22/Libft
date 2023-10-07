/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:23:30 by root              #+#    #+#             */
/*   Updated: 2023/10/04 15:17:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*p_str;

	p_str = str;
	while (*p_str)
		p_str++;
	return (p_str - str);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	length;

	length = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*src && (dstsize - 1) > 0)
	{
		*dest++ = *src++;
		length++;
		dstsize--;
	}
	*dest = '\0';
	return (length + ft_strlen(src));
}
