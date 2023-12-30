#include <stdio.h>

int main()
{
  int n, array[20];

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("Enter the elements: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  int max = 0;
  int secondmax = 0;
  int tmax = 0;

  for (int i = 0; i < n; i++)
  {

    if (array[i] > max)
    {
      tmax = secondmax;
      secondmax = max;
      max = array[i];
    }
  }

  printf("Second largest element is %d", tmax);

  return 0;
}
