/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jodoming <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 12:23:53 by jodoming     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/24 13:43:48 by jodoming    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_memalloc(size_t size);
char		*ft_strnew(size_t size);
char		*ft_strjoin(char const *s1, char const *s2);
#endif
