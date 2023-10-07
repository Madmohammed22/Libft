/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:12:50 by root              #+#    #+#             */
/*   Updated: 2023/09/02 21:29:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && n > 0)
	{
		i = 0;
		while (haystack[i] && haystack[i] == needle[i] && i < n)
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
