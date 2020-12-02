/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:14:22 by jescully          #+#    #+#             */
/*   Updated: 2020/12/02 11:52:38 by jean             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned const char *str1;
	unsigned const char *str2;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (((int)s1)[i] - ((int)s2)[i]);
	}
	return (0);
}
