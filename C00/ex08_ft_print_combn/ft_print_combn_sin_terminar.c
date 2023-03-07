#include <stdio.h>
#include <unistd.h>

int	ft_scanf(int n)
{
	printf("Please, give me a number between 0 and 10:\n");
	scanf("%d", &n);
	return (n);
}

void	ft_writing(int arr[], int n)
{
	int	i;
	char	c;

	i = 0;
	while(i < n)
	{
		c = arr[i] + '0';
		if(c <= '9' && c >= '0')
		{	
			write(1, &c, 1);
			i++;
		}
	}
	write(1, " ", 1);
}

void	ft_aux_loop(int arr[], int n, int i)
{
	if(arr[i] < 9)
	{
		arr[i]++;
		ft_writing(arr, n);
	}
	else if(!(arr[i - 1] >= 9))
	{
		arr[i - 1]++;
		arr[i] = arr[i - 1] + 1;
		if(i - 2 >= -1)
			ft_writing(arr, n);
		ft_aux_loop(arr, n, i);
	}
	else if(arr[i - 1] == 9)
	{
		if(arr[i - 2] < arr[i - 1])
		{
			arr[i - 2]++;
			arr[i - 1] = arr[i - 2]++;
			arr[i] = arr[i - 1]++;
			ft_writing(arr, n);
			ft_aux_loop(arr, n, i);
		}
	}
	i--;
	if(!(arr[0] + 1 == arr[1]))
		ft_aux_loop(arr, n, i);
}

void	ft_print_combn(int n)
{
	int	arr[n];
	int	i;

	if(n < 0 || n > 10)
	{
		printf("int n should be between '0' and '10', so try it again\n");
		return;
	}
	else
	{
		for(i = 0; i < n; i++)
			arr[i] = i;
		i = n - 1;
		ft_writing(arr, n);
		ft_aux_loop(arr, n, i);	
	}
}

int	main(void)
{
	int	n;

	n = 0;
	ft_print_combn(ft_scanf(n));
	return (0);
}
