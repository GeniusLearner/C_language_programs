#include<stdio.h>

void fact(int);

void main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    fact(x);
}

void fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
        fact*=i;
    printf("\nThe factorial of a number: %d", fact);
}

