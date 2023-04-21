#include <stdio.h>

int	main(void)
{
        static char	buffer[10];
	int			i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d: %d\n", i, buffer[i]);
		return (0);
	}
}
