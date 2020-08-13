#include <stdio.h>

int main()
{
   int arr[100], pos, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);

   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (c = n - 1; c >= pos - 1; c--)
      arr[c+1] = arr[c];
   arr[pos-1] = value;
   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", arr[c]);
   return 0;
}
