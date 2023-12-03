#include<stdio.h>
int main()
{
    int x,y,a1,b1,c1,a2,b2,c2;
    printf("Enter the values of (a1,b1,c1) and (a2,b2,c2)\n");
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&a1, &b1,&c1,&a2,&b2,&c2);
    x=((c2*b1)-(c1*b2))/((a1*b2)-(a2*b1));
    y=((c2*a1)-(c1*a2))/((b1*a2)-(a1*b2));
    printf("The value of x is :%d\n",x);
    printf("The value of y is:%d",y);
}