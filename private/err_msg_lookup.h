/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg_lookup.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:01:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:20:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERR_MSG_LOOKUP_H
# define ERR_MSG_LOOKUP_H

# include <stddef.h>
# include "enum/e_ret.h"

typedef struct s_err_msg	t_err_msg;

struct s_err_msg
{
	int const	err;
	char const	*msg;
	int const	detail;
};

static t_err_msg const		g_err_msg[] = {
	{EXIST_ERR, "a Makefile already exists", 0},
	{OPEN_ERR, "open() failed", 1},
	{READ_ERR, "read() failed", 1},
	{FT_STRJOIN_ERR, "ft_strjoin() failed", 0},
	{CREAT_ERR, "creat() failed", 1},
	{WRITE_ERR, "write() failed", 1},
	{0, NULL, 0}
};

#endif
