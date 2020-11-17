/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:09:07 by jescully          #+#    #+#             */
/*   Updated: 2020/11/17 18:32:59 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	int c;
	char *str = "this is a str";

	i = 0;
	
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	c = ft_strlen(str);
	return (c);
}
