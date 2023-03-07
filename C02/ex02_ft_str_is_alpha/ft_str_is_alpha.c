#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
  int   i;

  if (str[0] == '\0')
    return (1);

  i = 0;
  while (str[i] != '\0')
  {
    if((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
  int   i;

  printf("%d\n", (i = ft_str_is_alpha("HOlAsoyKevin")));
  printf("%d\n", (i = ft_str_is_alpha("")));
  printf("%d\n", (i = ft_str_is_alpha("Hola, soy Kevin")));
  return (0);
}
