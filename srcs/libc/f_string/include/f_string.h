/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qperez <qperez42@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/06 21:23:29 by qperez            #+#    #+#             */
/*   Updated: 2013/10/07 20:21:53 by qperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef F_STRING_H
# define F_STRING_H

#include <stddef.h>

char	*uf_strcpy(char *dest, const char *src);
char	*uf_strncpy(char *dest, const char *src, size_t size);
size_t	uf_strlcpy(char *dest, const char *src, size_t size);
char	*uf_strcat(char *dest, const char *src);
char	*uf_strncat(char *dest, const char *src, size_t size);
size_t	uf_strlcat(char *dest, const char *src, size_t size);
int		uf_strcmp(const char *left, const char *right);
int		uf_strncmp(const char *left, const char *right, size_t count);

#endif
