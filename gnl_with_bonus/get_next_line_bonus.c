/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:44:57 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/21 10:56:40 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	char		*str;
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	int			c;

	if (fd < 0 || BUFFER_SIZE < 1 || fd > FOPEN_MAX)
		return (NULL);
	str = ft_strjoin(0, buffer[fd]);
	if (ft_find_nl(buffer[fd]) > 0)
		return (str);
	c = read(fd, buffer[fd], BUFFER_SIZE);
	if (c < 0)
	{
		free(str);
		return (NULL);
	}
	while (c > 0 || *buffer[fd] != 0)
	{
		str = ft_strjoin(str, buffer[fd]);
		if (ft_find_nl(buffer[fd]) > 0)
			break ;
		c = read(fd, buffer[fd], BUFFER_SIZE);
	}
	return (str);
}
