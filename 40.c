#include<stdio.h>
int main()
{
    int n,lastdigit;
    printf("Enter the number:");
    scanf("%d", &n);
        lastdigit=n%10;
    printf("%d", lastdigit);
}