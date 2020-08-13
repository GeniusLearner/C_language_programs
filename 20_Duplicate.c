#include <stdio.h>
int main()
{
    int a[10], i,j,num;
    printf("\n Enter the size of the array");
    scanf ("%d", &num);
    for(i=0;i<num;i++)
       {
           scanf("%d", &a);
       }
    for(i=0;i<num;i++)
       {
          for(j= i+1;j<num;j++)
             {
                if(a[i] == a[j] && i!=j)
                  {
                       printf("\n Duplicate number %d%d", a[i],i);
                  }
		else {
			printf("\n no duplicate");
	             }
	     }
      }
          return 0;
}
