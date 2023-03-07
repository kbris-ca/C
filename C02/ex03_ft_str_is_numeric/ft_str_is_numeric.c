#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str)
{
  int   i;

  if (str[0] == '\0')
    return (1);

  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] < '0' || str[i] > '9')
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
  int   i;

  printf("%d\n", (i = ft_str_is_numeric("21542356")));
  printf("%d\n", (i = ft_str_is_numeric("")));
  printf("%d\n", (i = ft_str_is_numeric("kvnbrs383")));
  return (0);
}
