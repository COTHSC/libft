/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:43:14 by jescully          #+#    #+#             */
/*   Updated: 2020/11/20 13:41:50 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H



# include <unistd.h>
# include <bsd/string.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# define TRIM(c) (c == ' ' || c == '\n' || c == '\t')
# define ADDTL_WHITESPACE(c) (c == '\v' || c == '\r' || c == '\f')
# define IS_WHITESPACE(c) (TRIM(c) || ADDTL_WHITESPACE(c))

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
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start,size_t len);
char	*ft_strtrim(char const *s1, char const *set);
int     ft_ischarset(char c, char const *set);
char **ft_split(char const *s, char c);
int     ft_ischar(char o, char c);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_itoa(int n);
char    *ft_strcpy(char *dest, const char *src);
#endif
