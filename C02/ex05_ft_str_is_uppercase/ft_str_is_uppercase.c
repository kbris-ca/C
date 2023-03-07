#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
  int   i;

  if (str[0] == '\0')
    return (1);

  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] < 'A' || str[i] > 'Z')
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
  int   i;

  printf("%d\n", (i = ft_str_is_uppercase("HOLASOYKEVIN")));
  printf("%d\n", (i = ft_str_is_uppercase("")));
  printf("%d\n", (i = ft_str_is_uppercase("Hola, soy Kevin")));
  return (0);
}
