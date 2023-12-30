#include <stdio.h>

int main()
{
  int arr[10] = {1, 2, 2, 2, 0, 4, 5, 6, 7, 7};
  int frearr[10], count = 0;

  for (int i = 0; i <= 9; i++)
  {
    frearr[i] = 0;
  }
  for (int i = 0; i <= 9; i++)
  {
    if (frearr[i] == 0)
    {
      count = 1;
      for (int j = i+1 ; j <= 9; j++)
      {
        if (arr[j] == arr[i])
        {
          frearr[j] = 6545;
          count++;
        }
      }
     
        printf("%d occurs %d times\n", arr[i],count);
      
    }
  }
  return 0;
}
