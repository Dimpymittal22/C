#include<stdio.h>
int main()
{
    float avg, s=0, i=0,n;
    printf("Enter the number:");
    scanf("%f", &n);
    while(i<=n)
    {
        s=s+i;
        i++;
        avg=s/n;   
    }
    printf("%f\n", avg);
}