/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:24:13 by jescully          #+#    #+#             */
/*   Updated: 2020/11/17 12:05:29 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *cdest;
	const char *csrc;
	
	cdest = dest;
	csrc = src;
	i = 0;

	if (cdest[0] > csrc[0])
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	else	
		while (n > 0)
		{
			cdest[i] = csrc[i];
			i++;
		}
	return (dest);
}
