#include<stdio.h>

int main()
{
	int i, j, sales[5][3], s_sales, p_sales;
	
	printf("Enter the data\n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter data for salesman %d:\n", i+1);
		for(j=0;j<3;j++)
		    scanf("%d", &sales[i][j]);    
	}
	
	for(i=0;i<5;i++)
	{
		s_sales=0;
		
		for(j=0;j<3;j++)
		{
			s_sales+=sales[i][j];
	    }
	    
        printf("\nTotal sales for salesman %d: %d", i+1,s_sales);	
	}
	printf("\n");
	for(j=0;j<3;j++)
	{
		p_sales=0;
		for(i=0;i<5;i++)
		{
			p_sales+=sales[i][j];
		}
		
		printf("\nTotal sales for product %d: %d", j+1,p_sales);
	}
	return 0;
}

