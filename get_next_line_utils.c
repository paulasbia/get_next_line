/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:23:54 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 12:08:50 by pde-souz         ###   ########.fr       */
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
	while (str[i] != 0 && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	char	*ret;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
    printf("a len de s1 %d\n\n\n\n", ft_strlen(s1));
    printf("a len de s2 %d\n\n\n\n", ft_strlen(s2));
	nstr = (char *)malloc(sizeof(char) * len);
	ret = nstr;
	if (nstr == 0)
		return (NULL);
    printf("o malloc funcionou \n\n\n");
	while (s1 != 0 && *s1 != 0)
	{
		*nstr = *s1;
		nstr++;
		s1++;
	}
    printf("iniciando s2\n\n\n\n\n");
	while (*s2 != 0)
	{
		*nstr = *s2;
        if (*(s2) == '\n')
        {
            break;
        }
		nstr++;
		s1++;
	}
    printf("fez o s2 \n\n\n");
	*nstr = 0;
	return (ret);
}
