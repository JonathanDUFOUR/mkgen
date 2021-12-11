/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkgen.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 01:57:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/12/11 16:18:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MKGEN_H
# define MKGEN_H

# ifndef MK_PATH
#  define MK_PATH "/home/jodufour/Templates/mk_files"
# endif

# ifndef BUFF_SIZE
#  define BUFF_SIZE 4096
# endif

int	mkg_err_msg(int err);
int	mkg_file_content_get(int const fd, char const **const content);
int	mkg_file_create(char const *filename, char const *content);
int	mkg_ok_msg(void);
int	mkg_usage_msg(void);

#endif
