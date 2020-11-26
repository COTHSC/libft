/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:26:42 by jescully          #+#    #+#             */
/*   Updated: 2020/11/26 11:36:52 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	int				c;
	size_t			size;
	char			*ret;

	c = start;
	i = 0;
	size = ft_strlen(s) - c;
	if (size < len)
		ret = (char *)malloc(sizeof(char) * (size + 1));
	else
		ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	while (s[c] != 0 && i < len)
	{
		ret[i] = s[c];
		i++;
		c++;
	}
	ret[i] = '\0';
	return (ret);
}
