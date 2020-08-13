#include<stdio.h>

int main( )
{
  int a[20],n,num,i,j,temp;
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
	     printf("\nEnter number to be inserted : ");
	     scanf("%d", &num);
	     i = n-1;
	     while(num<a[i] && i>=0)
	     {
	           a[i+1] = a[i];
	           i--;
	     }

	     a[i+1] = num;
	     n++;
	     printf("\n\nAfter insertion array\n");

	     for(i=0; i<n; i++)
	     {
	              printf("\n%d", a[i]);
	     }
	     return 0;
}
