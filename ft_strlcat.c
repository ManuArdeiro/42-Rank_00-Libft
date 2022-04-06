/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolopez- <jolopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:39:48 by jolopez-          #+#    #+#             */
/*   Updated: 2022/04/04 21:00:04 by jolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_length(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_length(src);
	dst_len = ft_length(dst);
	j = dst_len;
	i = 0;
	if (dst_len < (size - 1) && size > 0)
	{
		while (src[i] && (dst_len + i) < (size - 1))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	//if (dst_len > size)
	//	dst_len = size;
	return (dst_len + src_len);
}
