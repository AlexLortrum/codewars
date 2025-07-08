#include <string.h>
#include <stdlib.h>

char *strrev (char *string)
{ 
  int i = 0;
  int j = strlen(string)-1;
  char c;
  while (i != j && i < j)
  {
    c = string[i];
    string[i] = string[j];
    string[j] = c;
    i++;
    j--;
  }
  return string; 
}
