/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:14:22 by jescully          #+#    #+#             */
/*   Updated: 2020/11/17 12:55:02 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *cs1;
	unsigned char *cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cs1[i] == cs2[i])
			i++;
		else
			return (cs1[i] -cs2[i]);
	}
	return (0);
}
