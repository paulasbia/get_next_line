/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:52:45 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 11:55:12 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*str;
	char	buffer[BUFFER_SIZE];

    str = 0;
    printf("teste na gnl \n");
   // printf("teste de read na gnl %ld\n\n", read(fd, buffer, BUFFER_SIZE));
	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		printf("vai para strjoin\n\n\n");
        printf("buffer na gnl é %s\n", buffer);
        str = ft_strjoin(str, buffer);
	}
	printf("%s\n", buffer);
	return (str);
}
