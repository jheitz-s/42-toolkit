/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_space.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qperez <qperez42@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/07 23:41:00 by qperez            #+#    #+#             */
/*   Updated: 2013/10/08 14:12:37 by qperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** <This file contains function>
** < uf_is_space, uf_skip_space >
** Copyright (C) <2013>  Quentin Perez <qperez42@gmail.com>
**
** This file is part of 42-toolkit.
**
** 42-toolkit is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <d_bool.h>
#include <t_types.h>

bool	uf_is_space(const uc c)
{
	return (c == '\t' || c == ' ' || c == '\r' ||
			c == '\f' || c == '\v' || c == '\n');
}

char	*uf_skip_space(const char *str)
{
	while (uf_is_space(*str) == true)
		str = str + 1;
	return ((char *)str);
}
