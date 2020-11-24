/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:43:01 by jescully          #+#    #+#             */
/*   Updated: 2020/11/24 16:55:18 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *cs;
	unsigned char cc;
	int cn;

	cn = (int)n;
	cs = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (cs && i < cn)
	{
		if (cs[i] == cc)
			return (&cs[i]);
		i++;
	}
	return (NULL);
}
