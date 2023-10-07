/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:07:57 by root              #+#    #+#             */
/*   Updated: 2023/09/23 22:01:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	ps1;
	unsigned char	ps2;

	while (n--)
	{
		ps1 = *s1++;
		ps2 = *s2++;
		if (ps1 != ps2)
		{
			return (ps1 - ps2);
		}
		if (ps1 == '\0' && ps2 == '\0')
			return (0);
	}
	return (0);
}
