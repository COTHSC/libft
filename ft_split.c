/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:02:10 by jescully          #+#    #+#             */
/*   Updated: 2020/11/24 16:56:33 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countthewords(char const *s, char c)
{
	int i;
	int cw;

	cw = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			cw++;
		i++;
	}
	if (s[0] != c)
		cw++;
	if (s[i - 1] == c)
		cw--;
	return (cw);
}

char	**ft_split(char const *s, char c)
{
	int wc;
	char **strs;
	int lead;
	int follow;
	int row;
	int collumn;

	row = 0;
	lead = 0;
	wc = ft_countthewords(s, c);
	if (!(strs = (char**)malloc(sizeof(char*) * (wc + 1))))
		return (NULL);
	while (row < wc)
	{
		collumn = 0;
		while (ft_ischar(s[lead], c))
			lead++;
		follow = lead;
		while (!ft_ischar(s[lead], c) && s[lead])
			lead++;
		if (!(strs[row] = (char *)malloc(sizeof(char) * ((lead - follow + 1)))))
			return (NULL);
		while (follow < lead)
			strs[row][collumn++] = s[follow++];
		strs[row++][collumn] = '\0';
	}
	strs[row] = NULL;
	return (strs);
}
