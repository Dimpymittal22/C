#include<stdio.h>
int main()
{
    int n,i,fact;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1,fact=1;i<=n; i++)
    {
        fact=fact*i;
        printf("%d\n", fact);
    }
}
