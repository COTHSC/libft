/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:06:08 by jescully          #+#    #+#             */
/*   Updated: 2020/11/25 10:01:01 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		result;
	char	*cnptr;

	sign = 1;
	i = 0;
	result = 0;
	cnptr = (char *)nptr;
	while (IS_WHITESPACE(*cnptr))
		cnptr++;
	if (*cnptr == '-' && ft_isdigit(*(cnptr + 1)))
	{
		sign = -1;
		cnptr++;
	}
	if (*cnptr == '+' && ft_isdigit(*(cnptr + 1)))
		cnptr++;
	while (ft_isdigit(*cnptr))
	{
		result = result * 10 + (*cnptr - '0');
		cnptr++;
	}
	return (sign * result);
}
