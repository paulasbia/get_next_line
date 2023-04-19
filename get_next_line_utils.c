/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:23:54 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 19:51:42 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		return (0);
	}
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2, int c)
{
	char	*nstr;
	char	*ret;
	int		i;

	i = 0;
    printf("a len é de %d\n", ft_strlen(s1) + c + 1);
	nstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + c + 1);
	ret = nstr;
	if (nstr == 0)
		return (NULL);
	while (s1 != 0 && *s1 != 0)
	{
		*nstr = *s1;
		nstr++;
		s1++;
	}
	while (i < c)
	{
		*nstr = *s2;
		nstr++;
		s2++;
		i++;
        printf("i vale %d\n", i);
        printf("c vale %d\n", c);
        printf("o retorno %s\n", ret);
	}
	*nstr = 0;
	return (ret);
}
