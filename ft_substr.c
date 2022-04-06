/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolopez- <jolopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:35:24 by jolopez-          #+#    #+#             */
/*   Updated: 2022/04/04 20:47:52 by jolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static char	*ft_alloc_mem(char *str, char const *s,
	unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && (i - start) < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

static char	*ft_alloc_empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		str = ft_alloc_empty();
		return (str);
	}
	if (ft_strlen(s) < len - start)
		len = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = ft_alloc_mem(str, s, start, len);
	return (str);
}

/*int	main(void)
{
	char	*s = "La primera vez que caminé sobre el agua tenía 10 años.";
	int		start = 5;
	int		len = 10;
	char	*res;

	res = ft_substr(s, start, len);
	printf("res = %s\n", res);
	return (0);
}*/	
