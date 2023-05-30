/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u4s2e0r <u4s2e0r@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:11:19 by u4s2e0r           #+#    #+#             */
/*   Updated: 2023/05/28 22:11:20 by u4s2e0r          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int ft_isqlpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *str);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *s, int c);
int ft_strncmp(char *s1, char *s2, unsigned int n);
void    *ft_memchr(const void *mb, int c, size_t n);
int ft_memcmp(const void *mb1, const void *mb2, size_t n);
char    *ft_strnstr(const char *str, const char *tofind, size_t n);
int ft_atoi(char *str);
void    *ft_calloc(size_t nmb, size_t n);
char    *ft_strdup(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t n);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);



#endif