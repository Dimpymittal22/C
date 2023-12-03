#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,p,R,I;
        printf("Enter the values of a,b,c\n");
        scanf("%f\n%f\n%f\n", &a, &b,&c);
        printf("The quadratic equation is: %fx^2+%fx+%f\n", a,b,c);
        p=b*b-(4*a*c);
        if(p>0)
        {
            printf("The roots are real and distinct.\n");
            x1=(-b+sqrt(p))/2*a;
            x2=(-b-sqrt(p))/2*a;
            printf("First root is:%f\n", x1);
            printf("Another root is:%f\n", x2);
        }
        if(p==0)
        {
            printf("The roots are real and equal.\n");
            x1=(-b+sqrt(p))/2*a;
            x2=(-b-sqrt(p))/2*a;
            printf("First root is:%f\n", x1);
            printf("Another root is:%f\n", x2);
        }
        else
        {
            printf("The roots are imaginary.\n");
            R=-b/2*a;
            I=(sqrt(-p))/2*a;
            printf("First root is:%f+%fi\n",R,I);
            printf("Another root is:%f-%fi\n,",R,I);
        }
}