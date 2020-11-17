/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:43:14 by jescully          #+#    #+#             */
/*   Updated: 2020/11/17 18:21:13 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H



#include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void    *ft_memset(char *s, int c, int n);
void    ft_bzero(char *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat (char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);

#endif
