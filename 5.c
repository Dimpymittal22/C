//temperature conversion
#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the temperature in C\n");
    scanf("%f", &C);
    F=1.8*C+32;
    printf("Temperature in F is:%f", F);

}