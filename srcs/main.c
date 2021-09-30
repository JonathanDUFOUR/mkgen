/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:27:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/30 03:35:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_mem.h"
#include "mkgen.h"
#include "enum/e_ret.h"

int	main(void)
{
	char	*content;
	int		ret;
	int		fd;

	if (!access("./Makefile", F_OK))
		return (mkg_err_msg(EXIST_ERR));
	fd = open(MK_TEMPLATE_FILENAME, O_RDONLY);
	if (fd == -1)
		return (mkg_err_msg(OPEN_ERR));
	content = NULL;
	ret = mkg_file_content_get(fd, &content);
	if (ret == SUCCESS)
		ret = mkg_file_create("Makefile", content);
	ft_memdel(&content);
	if (ret != SUCCESS)
		return (mkg_err_msg(ret));
	return (mkg_ok_msg());
}
