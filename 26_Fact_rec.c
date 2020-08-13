#include<stdio.h>

int fact(int);

void main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    printf("The factorial of the number: %d", fact(x));
}

int fact(int a)
{
    if(a>=1)
        return a*fact(a-1);
    else return 1;
}

