#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    do{
        fact=i*fact;
        printf("%d\n",fact);
        i++;
    }
    while(i<=n);
}