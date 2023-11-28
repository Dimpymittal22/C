//roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2;
    printf("Enter the values of a,b,c\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("The equation is %dx^2+%dx+%d", a,b,c);
    x1=(-b+sqrt((b*b)-(4*a*c)))/2*a;
    x2=(-b-sqrt((b*b)-(4*a*c)))/2*a;
    printf("The roots are:%d\n%d",x1,x2);
}