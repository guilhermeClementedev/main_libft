#include "libft.h"

size_t ft_strlen(const char *str)
{
  long long unsigned int i;

  i = 0;
  while(str[i])
    i++;
  return (i);  
}
/*
int main()
{
  printf("%ld\n", ft_strlen("test"));
  printf("%ld\n", strlen("test"));
  printf("%ld\n", ft_strlen("Just trying to survive"));
  printf("%ld\n", strlen("Just trying to survive"));
}*/