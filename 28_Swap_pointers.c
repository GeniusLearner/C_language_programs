#include<stdio.h>

void swap(int *a, int *b);

void main()
{
	int n1,n2;
	printf("Enter the numbers:\n");
	scanf("%d%d", &n1, &n2);
	swap(&n1, &n2);
	printf("\nAfter swap:\n");
	printf("%d\n%d", n1, n2);
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

