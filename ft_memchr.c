/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdu <sdu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:52:16 by sdu               #+#    #+#             */
/*   Updated: 2024/11/15 15:51:22 by sdu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	value;

	d = (unsigned char *)s;
	value = (unsigned char)c;
	while (n--)
	{
		if (*d == value)
			return ((void *)d);
		d++;
	}
	return (NULL);
}
