#include<stdio.h>
int main()
{
    int i=2;
    printf("Even numbers between 1-100:\n");
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    int j=1;
    printf("Odd numbers between 1-100:\n");
    while(j<=100)
    {
        if(j%2!=0)
        {
            printf("%d\n", j);
        }
        j++;
    }
}