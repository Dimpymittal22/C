#include<stdio.h>
int main()
{
    int n,firstdigit;
    printf("Enter the number:");
    scanf("%d", &n);
    firstdigit=n;
    while(firstdigit>=10)
    {
        firstdigit=firstdigit/10;
    }
    printf("%d", firstdigit);
}