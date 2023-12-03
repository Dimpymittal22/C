#include<stdio.h>
#include<math.h>
int main()
{
    float area,S,a,b,c;
    printf("Enter the values of a,b,c:");
    scanf("%f%f%f", &a,&b,&c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("The area is:%f", area);
}