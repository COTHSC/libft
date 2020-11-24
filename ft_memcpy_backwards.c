/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_backwards.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:46:51 by jescully          #+#    #+#             */
/*   Updated: 2020/11/24 12:17:55 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_backwards(void *dest, const void *src, size_t n)
{
	char *cdest;
	char *csrc;
	
	if (n == 0 || src == dest)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)src;

	while (n--)
	{	
		cdest[n] = csrc[n];
	}

	return (cdest);
}
