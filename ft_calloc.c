/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdu <sdu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:52:11 by sdu               #+#    #+#             */
/*   Updated: 2024/11/14 18:08:47 by sdu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	new = malloc(size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(unsigned char *)(new + i) = 0;
	}
	return (new);
}

void	*ft_calloc(size_t count, size_t size)
{
	if (size != 0 && count > ((size_t)-1 / size))
		return (NULL);
	return (ft_memalloc(count * size));
}