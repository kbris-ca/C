#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	auxA;
	int	auxB;

	auxA = *a;
	auxB = *b;
	*a = auxA / auxB;
	*b = auxA % auxB;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	auxA;
	int	auxB;

	auxA = 8;
	auxB = 2;
	a = &auxA;
	b = &auxB;
	ft_ultimate_div_mod(a, b);
	printf("The div is: %d\n", auxA);
	printf("And the mod is: %d\n", auxB);
	return (0);
}
