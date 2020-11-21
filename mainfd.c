/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainfd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:11:28 by jescully          #+#    #+#             */
/*   Updated: 2020/11/20 19:05:42 by jescully         ###   ########.fr       */
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
	ft_putendl_fd("this is my blues", fd);
	ft_putnbr_fd(1239567, fd);
	if (close(fd) == -1)
		return 1;

	return 0;
}
