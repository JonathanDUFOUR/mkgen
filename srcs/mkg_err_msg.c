/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkg_err_msg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:05:23 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:32:20 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "colors.h"
#include "err_msg_lookup.h"

int	mkg_err_msg(int err)
{
	int	i;

	fprintf(stderr, RED "Error:\n");
	i = 0;
	while (g_err_msg[i].msg && err != g_err_msg[i].err)
		++i;
	if (g_err_msg[i].msg)
	{
		if (g_err_msg[i].detail)
			perror(g_err_msg[i].msg);
		else
			fprintf(stderr, "%s\n", g_err_msg[i].msg);
	}
	fprintf(stderr, WHITE);
	return (err);
}
