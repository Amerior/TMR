/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdu <sdu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:52:32 by sdu               #+#    #+#             */
/*   Updated: 2024/11/15 15:41:26 by sdu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;

  i = 0;
  while (i < n && s1[i] == s2[i])
    i++;
  if (i < n)
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
  return (0);
}
