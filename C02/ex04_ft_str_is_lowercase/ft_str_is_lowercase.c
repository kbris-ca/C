#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
  int   i;

  if (str[0] == '\0')
    return (1);

  i = 0;
  while (str[i] != '\0')
  {
    if(str[i] < 'a' || str[i] > 'z')
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
  int   i;

  printf("%d\n", (i = ft_str_is_lowercase("holasoykevin")));
  printf("%d\n", (i = ft_str_is_lowercase("")));
  printf("%d\n", (i = ft_str_is_lowercase("HolasoyKevin")));
  return (0);
}
