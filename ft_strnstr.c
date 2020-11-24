/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 09:36:16 by jescully          #+#    #+#             */
/*   Updated: 2020/11/24 16:02:15 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	unsigned long c;
	int cn;

	cn = (int)len;
	i = 0;
	if (strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < cn)
	{
		c = 0;
		while (big[i] == little[c] && i < cn)
		{
			c++;
			i++;
			if (c == strlen(little))
				return ((char *)&big[i - c]);
		}
		i++;
	}
	return (NULL);
}
