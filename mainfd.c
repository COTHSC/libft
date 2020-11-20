/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainfd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:11:28 by jescully          #+#    #+#             */
/*   Updated: 2020/11/20 18:31:43 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int	main(void)
{
	int fd;

	fd = open("file.txt", O_WRONLY);
	if (fd == -1)
		return 1;
	ft_putchar_fd('C', fd);
	ft_putstr_fd("this is my blues", fd);
	if (close(fd) == -1)
		return 1;

	return 0;
}

