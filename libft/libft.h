/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nverbrug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 17:02:52 by nverbrug          #+#    #+#             */
/*   Updated: 2021/04/20 14:36:18 by nverbrug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_intlen(int x);
int			ft_isalpha (int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);
int			ft_strlen_gnl(const char *str);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str, int checker);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putnbr_fd(int nb, int fd);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
char		*ft_itoa_base(unsigned long long n, char *base, int base_size);
char		**ft_split(char const *s, char c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_add_returnline(char *str);
int			ft_free_gnl(char **str, int n);
int			ft_init_run(int fd, char **line, char *rest);
int			get_next_line(int fd, char **line);
char		*ft_strjoin_gnl(char const *s1, char const *s2);
char		*ft_strdup_gnl(const char *s1);
char		*ft_strndup_gnl(const char *s1);
char		*ft_strchr_gnl(const char *str);
char		*ft_strdup_text(const char *str);
void		free_str(char **str);
int			ft_run(int fd, char **line);

#endif
