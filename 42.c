#include<stdio.h>
#include<math.h>
int main()
{
    int n,first,last,digits;
    printf("Enter the number:");
    scanf("%d", &n);
    last=n%10;
    digits=log10(n);
    first=n/pow(10,digits);
    printf("First digit is: %d\nLast digit is: %d",first,last);
}