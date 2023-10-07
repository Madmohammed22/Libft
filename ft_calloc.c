/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:28:21 by root              #+#    #+#             */
/*   Updated: 2023/09/12 17:28:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define INT_MAX 2147483647

static void	ft_zeros(void *buffer, size_t n)
{
	while (n--)
		*(unsigned char *)buffer++ = 0;
}

void	*ft_calloc(size_t count, size_t n)
{
	void	*buffer;

	if (n && count && count > (INT_MAX / 2))
		return (NULL);
	buffer = malloc(n * count);
	if (!buffer)
		return (NULL);
	ft_zeros(buffer, n * count);
	return (buffer);
}
