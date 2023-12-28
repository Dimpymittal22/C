#include<stdio.h>
int main()
{
    int p,n,rem,rev=0;
    printf("Enter the number:");
    scanf("%d", &n);
    p=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reversed no. is %d", rev);
}