#include<stdio.h>
int main()
{
    float n,sum,avg,i;
    printf("Enter the number:");
    scanf("%f", &n);
    for(sum=0,i=1;i<=n; i++)
    {
        sum=sum+i;
        avg=sum/n;
    }
    printf("%f", avg);
}
