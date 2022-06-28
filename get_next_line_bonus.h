/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljaehaer <ljaehaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:39:58 by ljaehaer          #+#    #+#             */
/*   Updated: 2021/11/12 15:53:21 by ljaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# ifndef FD_SIZE
#  define FD_SIZE 30000
# endif

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	*ft_process_line(char *buffer, char **line);
char	*ft_process_line_at_empty_buf(char **line);
char	*multi_func(char **line, ssize_t read_bytes);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *str, int ch);
char	*ft_strjoin(char *s1, char const *s2);

#endif
