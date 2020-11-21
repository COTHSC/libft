/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:46:51 by jescully          #+#    #+#             */
/*   Updated: 2020/11/21 17:10:21 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *cdest;
	const char *csrc;
	int cn;
	
	cn = (int)n;	
	cdest = dest;
	csrc = src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (cdest[i] == c)
			 return (&cdest[++i]);
		i++;
	}

	return (NULL);
}
