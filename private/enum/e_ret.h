/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_ret.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:28:06 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/11 15:38:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_RET_H
# define E_RET_H

enum	e_ret
{
	SUCCESS,
	OPEN_ERR,
	READ_ERR,
	USAGE_ERR,
	EXIST_ERR,
	CREAT_ERR,
	WRITE_ERR,
	CLOSE_ERR,
	FT_STRJOIN_ERR,
	WRITE_CLOSE_ERR
};

#endif
