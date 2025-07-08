int bit_count(int num)
{
  if (num == 0) return 0;
  if (num == 1) return 1;
  return (num % 2) + bit_count(num / 2);
}

void sort_by_bit(int * arr, const unsigned int arrLength){
    int bit_arr[arrLength];
    for (unsigned int i = 0; i < arrLength; i++) bit_arr[i] = bit_count(arr[i]);   
    
    unsigned int index_min;
    unsigned int temporary;
    for (unsigned int i = 0; i < arrLength-1; i++)
    {
      index_min = i;
      for (unsigned int j = i+1; j < arrLength; j++)
      {
        if (bit_arr[j] < bit_arr[index_min]) index_min = j;
        else if (bit_arr[j] == bit_arr[index_min])
        {
          if (arr[j] < arr[index_min]) index_min = j;
        }
      }
      temporary = arr[i];
      arr[i] = arr[index_min];
      arr[index_min] = temporary;
      
      temporary = bit_arr[i];
      bit_arr[i] = bit_arr[index_min];
      bit_arr[index_min] = temporary;
    }
}
