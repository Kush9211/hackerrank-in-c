#include <stdio.h>
int find_min(int[], int);
int find_max(int[], int);
int main()
 {
    int i, arr[100], size, locmin,locmax, min,max;
    printf("Input number of elements in array\n");
    scanf("%d", &size);
    printf("Input %d integers\n", size);
    for (i= 0; i< size; i++)
        scanf("%d", &arr[i]);

        locmin= find_min(arr, size);
        min  = arr[locmin];
    printf("Minimum element location = %d and value = %d.\n", locmin + 1, min);

    locmax= find_max(arr, size);
        max  = arr[locmax];
    printf("Maximum element location = %d and value = %d.\n", locmax + 1, max);
  return 0;
}
int find_min(int a[], int n)
{
    int i, min, index;
    min = a[0];
    index = 0;

  for (i= 1; i < n; i++)
    {
    if (a[i] < min)
        {
         index = i;
         min = a[i];
        }
    }

  return index;
}


int find_max(int a[], int n)
{
    int i, max, index;
    max = a[0];
    index = 0;

  for (i= 1; i < n; i++)
    {
    if (max<a[i])
        {
         index = i;
         max = a[i];
        }
    }

  return index;
}

