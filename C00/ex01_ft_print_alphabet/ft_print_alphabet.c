#include <stdio.h>

void	ft_print_alphabet(void);

int	main(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
	return (0);
}
