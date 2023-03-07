#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
  int   i;

  i = 0;
  while (!(str[i] == '\0'))
  {
    write(1, &str[i], 1);
    i++;
  }
}

int	main(void)
{
	//char	*str;
    //char    string;

    //str = "I am Kevin\n";
    //*str = "My name is Kevin\n";
    ft_putstr("My name is Kevin Bris\n");
	return (0);
}
