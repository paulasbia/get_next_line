/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:52:45 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/20 11:14:28 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*str;
	static char	buffer[BUFFER_SIZE];
	int			c;

	if (fd < 0 || BUFFER_SIZE < 1 || fd > FOPEN_MAX)
		return (NULL);
	str = 0;
	if (ft_find_nl(buffer) > 0)
		return (str);
	c = read(fd, buffer, BUFFER_SIZE);
	printf("teste na gnl \n");
	while (c > 0)
	{
		printf("o buffer vale: %s\n\n", buffer);
		str = ft_strjoin(str, buffer, c);
		if (ft_find_nl(buffer) > 0)
			break ;
		printf("o str é \"%s\"\n", str);
		c = read(fd, buffer, BUFFER_SIZE);
	}
	printf("o retorno é %s\n", str);
	return (str);
}
