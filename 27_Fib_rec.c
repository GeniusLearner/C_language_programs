#include<stdio.h>

int Fibonacci(int);

void main()
{
    int n,i;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("The Fibonacci series is:\n");
    for(i=0;i<n;i++)
        printf("%d\n", Fibonacci(i));
}

int Fibonacci(int a)
{
    if(a==0 || a==1)
        return a;
    else
	return Fibonacci(a-1)+Fibonacci(a-2);
}

