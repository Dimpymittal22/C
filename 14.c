#include<stdio.h>
int main()
{
    int phys, chem, maths, total, percentage;
        printf("Enter the marks in phys,chem,maths\n");
        scanf("%d\n%d\n%d", &phys, &chem, &maths);
            total=phys+chem+maths;
            percentage=(total*100)/300;
        printf("The total marks are:%d\n", total);
        printf("The percentage is:%d\n", percentage);
    if(percentage>=33)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
}