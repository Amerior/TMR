/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdu <sdu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:52:24 by sdu               #+#    #+#             */
/*   Updated: 2024/11/13 12:29:32 by sdu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len--)
	{
		*ptr++ = value;
	}
	return (b);
}
