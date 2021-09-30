/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_ret.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:28:06 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:25:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_RET_H
# define E_RET_H

enum	e_ret
{
	SUCCESS,
	EXIST_ERR,
	OPEN_ERR,
	READ_ERR,
	FT_STRJOIN_ERR,
	CREAT_ERR,
	WRITE_ERR,
	CLOSE_ERR,
	WRITE_CLOSE_ERR
};

#endif
