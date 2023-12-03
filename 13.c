#include<stdio.h>
int main()
{
    int total,percentage,physics,chemistry,maths;
    printf("Enter the marks of physics, chemistry, maths");
    scanf("\n%d\n%d\n%d", &physics, &chemistry, &maths);
    total=(physics+chemistry+maths);
    percentage=(total*100)/300;
    printf("The total marks are: %d\n", total);
    printf("The percentage is: %d", percentage);
}