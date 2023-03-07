#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	auxA;
	int	auxB;

	auxA = a;
	auxB = b;
	*div = auxA / auxB;
	*mod = auxA % auxB;
}

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 8;
	b = 2;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("The result of this division is: %d\n", a);
	printf("And the module is: %d\n", b);
	return (0);
}
