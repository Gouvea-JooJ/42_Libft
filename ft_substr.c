/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 00:43:19 by jopedro2          #+#    #+#             */
/*   Updated: 2022/06/22 22:42:12 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	slen;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (((slen - start) > len) && (start < slen))
		p = malloc((len * sizeof(char) + 1));
	else if (start > slen)
		p = malloc(sizeof(char));
	else
		p = malloc(((slen - start) * sizeof(char) + 1));
	if (!p)
		return (NULL);
	if ((start < slen))
	{
		while ((i < len) && s[start])
			p[i++] = s[start++];
	}
	p[i] = '\0';
	return (p);
}
