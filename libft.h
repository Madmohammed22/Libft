/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:12:58 by root              #+#    #+#             */
/*   Updated: 2023/10/04 20:16:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

char				*ft_strchr(const char *stack, int needle);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t n);
char				*ft_strrchr(const char *str, int ch);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *str, int c, size_t n);
int					ft_isprint(int c);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
void				*ft_calloc(size_t count, size_t n);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *str);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;

}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));

#endif
