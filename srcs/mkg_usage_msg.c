/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkg_usage_msg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:44:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/11 15:51:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "enum/e_ret.h"

#ifndef USAGE
# define USAGE	"\
Usage:\n\
\t./mkgen template_filename_without_extension\n\
"
#endif

int	mkg_usage_msg(void)
{
	printf(USAGE);
	return (SUCCESS);
}
