/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkg_ok_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 03:36:12 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:37:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "colors.h"
#include "enum/e_ret.h"

int	mkg_ok_msg(void)
{
	printf(GREEN "Makefile well generated\n" WHITE);
	return (SUCCESS);
}
