/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 23:47:23 by jopedro2          #+#    #+#             */
/*   Updated: 2022/06/16 00:02:23 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;

	p = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s, ft_strlen(s) + 1);
	return (p);
}
