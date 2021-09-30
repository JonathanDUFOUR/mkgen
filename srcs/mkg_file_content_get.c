/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkg_file_content_get.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:15:15 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:01:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"
#include "ft_mem.h"
#include "mkgen.h"
#include "enum/e_ret.h"

int	mkg_file_content_get(int const fd, char **content)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		rd;

	rd = read(fd, buff, BUFF_SIZE);
	while (rd > 0)
	{
		buff[rd] = 0;
		tmp = *content;
		*content = ft_strjoin(*content, buff);
		ft_memdel(&tmp);
		if (!*content)
			return (FT_STRJOIN_ERR);
		rd = read(fd, buff, BUFF_SIZE);
	}
	if (rd == -1)
		return (READ_ERR);
	return (SUCCESS);
}
