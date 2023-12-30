#include <stdio.h>

int main()
{
  int arr[4] = {1, 2, 0, 4};
  int ar[5] = {17, 8, 9, 7, 6};
  int x = 0;
  int emptyarr[10];
  for (int i = 0; i <= 3; i++)
  {
    emptyarr[i] = arr[i];
  }
  for (int j = 0; j <= 4; j++)
  {
    emptyarr[j + (sizeof(arr) / sizeof(arr[0]))] = ar[j];
    // printf("%d\n",emptyarr[j+(sizeof(arr))]);
  }
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (emptyarr[i] < emptyarr[j])
      {
        x = emptyarr[i];
        emptyarr[i] = emptyarr[j];
        emptyarr[j] = x;
      }
    }
  }
  printf("The ascending order of the above elemnets is:\n");
  for (int i = 0; i < 9; i++)
  {
    printf("%d\n", emptyarr[i]);
  }

  return 0;
}