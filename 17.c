#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,p;
        printf("Enter the values of a,b,c\n");
        scanf("%f\n%f\n%f", &a,&b,&c);
        printf("The quadratic equation is %fx^2+%fx+%f\n", a,b,c);
            p=b*b-(4*a*c);
            x1=(-b+sqrt (p))/2*a;
            x2=(-b-sqrt(p))/2*a;
        printf("The first root is: %f\n", x1);
        printf("The second root is: %f\n", x2);
}