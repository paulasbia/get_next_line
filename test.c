/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:02:22 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 11:53:13 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int	count(void)
{
	static int	num = 0;

	num++;
	return (num);
}

int	main(void)
{
	int		fd;
	//char	buffer[BUFFER_SIZE];

	printf("%d\n", count());
	printf("%d\n", count());
	fd = open("teste.txt", O_RDONLY);
	printf("o fd é %d\n", fd);
	//printf("teste de read %ld\n", read(fd, buffer, BUFFER_SIZE));
	//printf("o buffer é %s\n", buffer);
	get_next_line(fd);
}
