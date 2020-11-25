/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:46:51 by jescully          #+#    #+#             */
/*   Updated: 2020/11/25 09:59:13 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*cdest;
	const char	*csrc;
	int			cn;

	cn = (int)n;
	cdest = dest;
	csrc = src;
	i = 0;
	while (i < cn)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
