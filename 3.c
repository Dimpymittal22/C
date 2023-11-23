//swapping using third variable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a\n");
    scanf("%d", &a);
    printf("\nEnter the number b\n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:%d\n%d",a,b);
    return 0;

}