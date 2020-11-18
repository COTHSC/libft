/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:24:13 by jescully          #+#    #+#             */
/*   Updated: 2020/11/18 16:42:12 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *cdest;
	const char *csrc;
        int cn;

        cn = (int)n;
	
	cdest = dest;
	csrc = src;
	i = 0;

	if (cdest[0] > csrc[0])
		while (i < cn)
		{
			cdest[i] = csrc[i];
			i++;
		}
	else	
		while (cn > 0)
		{
			cdest[i] = csrc[i];
			i++;
		}
	return (dest);
}
