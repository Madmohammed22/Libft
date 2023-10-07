/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:26:13 by root              #+#    #+#             */
/*   Updated: 2023/09/08 18:55:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*p_str;

	p_str = str;
	while (n--)
		*(unsigned char *)p_str++ = (unsigned char)c;
	return (p_str);
}
