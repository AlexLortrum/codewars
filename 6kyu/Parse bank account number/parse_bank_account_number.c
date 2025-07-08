#include <string.h>

int cmp(char str1[7], char str2[7])
{
  for (int i = 0; i < 7; i++)
  {
    if (str1[i] != str2[i]) return 1;
  }
  return 0;
}

int convert(char number[7])
{
  if (cmp(number, "1110111") == 0) return 0;
  if (cmp(number, "0000011") == 0) return 1;
  if (cmp(number, "0111110") == 0) return 2;
  if (cmp(number, "0011111") == 0) return 3;
  if (cmp(number, "1001011") == 0) return 4;
  if (cmp(number, "1011101") == 0) return 5;
  if (cmp(number, "1111101") == 0) return 6;
  if (cmp(number, "0010011") == 0) return 7;
  if (cmp(number, "1111111") == 0) return 8;
  if (cmp(number, "1011111") == 0) return 9;
  return -1;
}

long parse_bank_account(const char *acctNbr)
{
  int strlength = strlen(acctNbr);
  int rowlen = strlength/3;
  char num[7];
  memset(num, '0', 7);
  int numi = 0;
  
  int row1 = 0; 
  int row2 = rowlen; 
  int row3 = (rowlen*2);
  
  long result = 0;

  while (row1 < rowlen) 
  {
    if (numi == 7)
    {
      result = (result * 10) + convert(num);
      memset(num, '0', 7);
      numi = 0;
    }
    else
    {
      if (numi < 2 || numi > 4)
      {
        if (acctNbr[row2] != ' ') num[numi] = '1';
        numi++;

        if (acctNbr[row3] != ' ') num[numi] = '1';
        numi++;
      }
      else 
      {
        if (acctNbr[row1] != ' ') num[numi] = '1';
        numi++;

        if (acctNbr[row2] != ' ') num[numi] = '1';
        numi++;

        if (acctNbr[row3] != ' ') num[numi] = '1';
        numi++;
      }
      row1++;
      row2++;
      row3++;
    }
  }
  return result;
}
