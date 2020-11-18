/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:04:04 by calle             #+#    #+#             */
/*   Updated: 2020/11/18 18:52:05 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H_
# define	LIBFT_H_
# include	<unistd.h>
# include 	<stdio.h>
# include	<stdlib.h>
# include	<string.h>
# include	<ctype.h>
void		*ft_memset(char *s, int c, int n);
void		ft_bzero(char *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int 		ft_tolower(int c);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char 		*ft_strrchr(const char *s, int c);
int 		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char 		*ft_strnstr(const char *s1, const char *s2, size_t len); 
int		ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
#endif
