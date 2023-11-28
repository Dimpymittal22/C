#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d;
    printf("Enter the values of (x1,x2) and (y1,y2)\n");
    scanf("%f%f%f%f", &x1,&x2,&y1,&y2);
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance is :%f", d);
}