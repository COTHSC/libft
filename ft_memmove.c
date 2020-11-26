/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:24:13 by jescully          #+#    #+#             */
/*   Updated: 2020/11/25 18:20:36 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*cdest; //
	const char		*csrc;
	int				cn;

	cn = (int)n;
	cdest = dest;
	csrc = src;
	i = 0;
	if (cdest[0] < csrc[0])
	{
		ft_memcpy(dest, src, n);
	}
	else
		while (cn-- > 0)
			cdest[cn] = csrc[cn];
	return (dest);
}
