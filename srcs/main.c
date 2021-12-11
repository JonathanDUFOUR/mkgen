/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:27:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/11 16:08:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_mem.h"
#include "ft_string.h"
#include "mkgen.h"
#include "enum/e_ret.h"

static char	*__get_filename(char const *str)
{
	char		*output;
	char const	*tmp;

	tmp = ft_strjoin(MK_PATH, "/");
	if (!tmp)
		return (NULL);
	output = ft_strjoin(tmp, str);
	ft_memdel(&tmp);
	if (!output)
		return (NULL);
	tmp = output;
	output = ft_strjoin(output, ".mk");
	ft_memdel(&tmp);
	return (output);
}

int	main(int const ac, char const **av)
{
	char const	*filename;
	char const	*content;
	int			ret;
	int			fd;

	if (ac != 2)
		return (mkg_err_msg(USAGE_ERR));
	if (!strcmp(av[1], "-h") || !strcmp(av[1], "--help"))
		return (mkg_usage_msg());
	if (!access("./Makefile", F_OK))
		return (mkg_err_msg(EXIST_ERR));
	filename = __get_filename(av[1]);
	if (!filename)
		return (mkg_err_msg(FT_STRJOIN_ERR));
	fd = open(filename, O_RDONLY);
	ft_memdel(&filename);
	if (fd == -1)
		return (mkg_err_msg(OPEN_ERR));
	ret = mkg_file_content_get(fd, &content);
	if (ret == SUCCESS)
		ret = mkg_file_create("Makefile", content);
	ft_memdel(&content);
	if (ret != SUCCESS)
		return (mkg_err_msg(ret));
	return (mkg_ok_msg());
}
