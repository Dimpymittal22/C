#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number:");
    scanf("%f", &n);
    if(n>0)
    {
        printf("POSITIVE");
    }
    else if(n==0)
    {
        printf("ZERO");
    }
    else
    {
        printf("NEGATIVE");
    }
}