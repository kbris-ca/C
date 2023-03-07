#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int*	nbr;
	int	nb;

	nb = 0;
	nbr = &nb;
	ft_ft(nbr);
	printf("%d\n", nb);
	return (0);
}
