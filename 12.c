#include<stdio.h>
int main()
{
    float area,radius;
    printf("Enter the value of radius\n");
    scanf("%f", &radius);
    area=3.14*radius*radius;
    printf("The area of circle is: %f\n", area);
}