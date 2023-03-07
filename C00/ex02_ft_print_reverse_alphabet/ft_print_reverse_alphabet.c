#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
	return (0);
}
