#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Before swapping, enter a and b:");
    scanf("%d\n%d", &a,&b);
    do{
        c=a;
        a=b;
        b=c;
        printf("After swapping:%d\n%d",a,b);
    }while(0);
}