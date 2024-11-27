/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdu <sdu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:52:11 by sdu               #+#    #+#             */
/*   Updated: 2024/11/20 20:41:14 by sdu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (size != 0 && count > ((size_t)-1 / size))
	{
		return (NULL);
	}
	ptr = (void *)malloc(count * size);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < (count * size))
	{
		*(unsigned char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
