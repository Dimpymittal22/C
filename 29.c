#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number:");
    scanf("%d", &n);
    while(i<=10)
    {
        printf("%dx%d=%d\n", n,i,n*i);
        i++;
    }
}