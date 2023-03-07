#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void	ft_is_negative(int n)
{
	printf("Escribe un número a continuación y te diré si es positivo o negativo:\n");
	scanf("%d", &n);
	if(n >= 0)
		printf("El número que has elegido es positivo.\n");
	else
		printf("El número que has elegido es negativo.\n");
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
