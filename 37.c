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
    if(rev==p)
    {
        printf("%d is a Pallindrome.", p);
    }
    else
    {
        printf("%d is not a Pallindrome.", p);
    }
}