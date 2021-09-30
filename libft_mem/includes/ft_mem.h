/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 00:44:15 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/31 19:50:54 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <string.h>

int		ft_memcmp(void const *a1, void const *a2, size_t n);

void	ft_bzero(void *addr, size_t n);
void	ft_memdel(void *addr);
void	ft_memswap(void *a, void *b);

void	*ft_calloc(size_t n, size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *addr, int c, size_t n);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

#endif
