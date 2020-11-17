/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:43:01 by jescully          #+#    #+#             */
/*   Updated: 2020/11/17 13:32:39 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *cs;
	unsigned char cc;

	cs = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;

	while (cs && i <= n)
	{
		if (cs[i] == cc)
			return &cs[i];
		i++;
	}
	return (NULL);
}
