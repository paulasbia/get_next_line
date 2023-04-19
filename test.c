/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:02:22 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 09:03:22 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count(void)
{
	static int	num = 0;

	num++;
	return (num);
}

int	main(void)
{
	printf("%d\n", count());
	printf("%d\n", count());
	printf("%d\n", count());
	printf("%d\n", count());
	printf("%d\n", count());
}
