/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:46:51 by jescully          #+#    #+#             */
/*   Updated: 2020/11/18 16:37:28 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	unsigned char *cdest;
	const char *csrc;
	int cn;
	
	cn = (int)n;	
	cdest = dest;
	csrc = src;
	i = 0;
	while (csrc[i] != c && csrc[i] != '\0')
	{
		cdest[i] = csrc[i];
		i++;
	}
	if (i > cn)
		return (NULL);
	return (&cdest[++i]);
}
