/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:24:13 by jescully          #+#    #+#             */
/*   Updated: 2020/12/02 10:36:26 by jean             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cn;

	if (!dest && !src)
		return (NULL);
	if ((char *)dest < (char *)src)
		ft_memcpy(dest, src, n);
	else
		while (cn-- > 0)
			((char *)dest)[cn] = ((char *)src)[cn];
	return (dest);
}
