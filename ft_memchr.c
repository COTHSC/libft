/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:43:01 by jescully          #+#    #+#             */
/*   Updated: 2020/11/16 17:47:19 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_mechr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *csrc;

	cdest = dest;
	csrc = src;
	i = -1;
	while (i != c && src)
	{
		cdest[i] = csrc[i];
		i++;
	}
	if (i > n)
		return (NULL);
	return (cdest[++i]);

