#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	auxA;
	int	auxB;

	auxA = 2;
	auxB = 4;
	a = &auxA;
	b = &auxB;
	ft_swap(a, b);
	printf("%d", auxA);
	printf("%d\n", auxB);
	return (0);
}
