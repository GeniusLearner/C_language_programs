#include<stdio.h>

int main( )
{
  int a[20],n,num,i,j,temp,c;
  printf("Enter the size of the array");
  scanf("%d",&n);

  printf(" Enter %d elements in array \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
    	} 

  printf("elements sorted order");
  for(i=0; i<n; i++)
	     {
		for(j=i+1; j<n; j++)
			{
	            		if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
	     			}
 			}
		}
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &num);

   if (num >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = num - 1; c < n - 1; c++)
         a[c] = a[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", a[c]);
   }
	     return 0;
}
