/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:22:12 by jescully          #+#    #+#             */
/*   Updated: 2020/11/17 17:53:21 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;

	i = 0;
	while (dst[i])
		i++;
	
	ft_strlcpy(&dst[i], src, size);
	return (ft_strlen(src));
}
