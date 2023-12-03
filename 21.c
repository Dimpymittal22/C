#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n>=1)
    {
        n--;
        printf("%d\n", n+1);
    }
}