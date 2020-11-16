/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:24:13 by jescully          #+#    #+#             */
/*   Updated: 2020/11/16 19:07:09 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char c;
	unsigned char *cdest;
	unsigned char *csrc;

	cdest = dest;
	csrc = src;

	i = 0;
	while (i < n)
	{
		c = csrc[i + 1];	
		cdest[i] = c;
		i++;
	}
	return (dest);
}





