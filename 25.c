#include<stdio.h>
int main()
{
    float avg,s=0,n,i=1;
    printf("Enter the number:");
    scanf("%f",&n);
    do{
        s=s+i;
        i++;
        avg=s/n;
    } while(i<=n);
    printf("%f",avg);
}