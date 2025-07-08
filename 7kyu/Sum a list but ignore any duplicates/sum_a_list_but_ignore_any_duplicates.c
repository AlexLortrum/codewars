#include <stddef.h>
#include <stdbool.h>

int sum_no_duplicates(size_t length, const int array[length]) {
  int sum = 0;
  int duplicates[length];
  size_t dup_index = 0;
  bool is_dup = false;
  
  for (size_t i = 0; i < length; i++)
  {
    is_dup = false;
    for (size_t j = 0; j < dup_index; j++)
    {
      if (duplicates[j] == array[i])
      {
        is_dup = true;
      }
    }
    
    if (!is_dup)
    {
      sum += array[i];
      for (size_t j = 0; j < i; j++)
      {
        if (array[j] == array[i]) 
        {
          sum -= array[i]*2;
          duplicates[dup_index] = array[i];
          dup_index++;
          break;
        }
      }
    }
  }
  return sum;
}
