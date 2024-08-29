#include "libft.h"

char *ft_strchr(const char *str, int c)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
    {
      return (char*)(&str[i]);
    }  
    i++;
  }
  if (c == 0) 
    return (char*)(&str[i]);
  return (0);
}

/*int main()
{
  printf("%s\n", strchr("VASCO da Gama", '\0'));
  printf("%s\n", ft_strchr("VASCO da Gama", '\0'));
}*/