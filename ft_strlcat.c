/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:40:28 by jopedro2          #+#    #+#             */
/*   Updated: 2022/06/22 19:59:26 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	totallen;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	totallen = dst_len + src_len;
	if (size < dst_len)
		return (src_len + size);
	while ((src[i] != '\0') && ((dst_len + 1) < size))
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	if (dst_len != size)
		dst[dst_len] = '\0';
	return (totallen);
}
