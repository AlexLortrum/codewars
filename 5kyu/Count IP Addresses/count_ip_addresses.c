#include <inttypes.h>
#include <stdbool.h>

int ipow(int base, int exp)
{
  int x = base;
  if (exp == 0) return 1;
  for (int i = 0; i < exp-1; i++)
  {
    x = x * base; 
  }
  return x;
}

uint32_t ips_between (const char *start, const char *end)
{
  uint32_t sum = 0;

  // for start
  int ipotcet1 = 0;
  bool dot1 = false;
  int i = 0;
  
  // for end
  int ipotcet2 = 0;
  bool dot2 = false;
  int j = 0;

  int otcet = 3; // num of otcet (from left to right)
  
  while(true)
  {
    if (start[i] == '.' || start[i] == '\0') dot1 = true;
    if (end[j] == '.' || end[j] == '\0') dot2 = true;

    if (!dot1)
    {
      ipotcet1 = (ipotcet1 * 10) + (start[i] - '0');  
      i++;
    }

    if (!dot2)
    {
      ipotcet2 = (ipotcet2 * 10) + (end[j] - '0');  
      j++;
    }

    if (dot1 && dot2)
    {
      sum += (ipotcet2 - ipotcet1) * ipow(256, otcet);
      if (otcet == 0) break;

      ipotcet1 = 0;
      ipotcet2 = 0;

      i++;
      j++;

      dot1 = false;
      dot2 = false;

      otcet--;
    }
  }
  return sum;
}
