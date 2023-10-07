/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:16:46 by root              #+#    #+#             */
/*   Updated: 2023/09/08 22:08:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dest_ptr;

	dest_ptr = dst;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (dest_ptr);
}
