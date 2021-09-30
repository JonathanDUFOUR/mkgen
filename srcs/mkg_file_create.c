/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkg_file_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 03:06:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:54:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "enum/e_ret.h"

int	mkg_file_create(char const *filename, char const *content)
{
	int		fd;
	size_t	content_len;

	fd = open(filename, O_WRONLY + O_CREAT, 0644);
	if (fd == -1)
		return (OPEN_ERR);
	content_len = strlen(content);
	while (content_len > 4096UL)
	{
		if (write(fd, content, 4096UL) == -1L)
		{
			if (close(fd) == -1)
				return (WRITE_CLOSE_ERR);
			return (WRITE_ERR);
		}
		content += 4096UL;
		content_len -= 4096UL;
	}
	if (write(fd, content, content_len) == -1L)
		return (WRITE_ERR);
	if (close(fd) == -1)
		return (CLOSE_ERR);
	return (SUCCESS);
}
