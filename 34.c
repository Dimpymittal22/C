#include<stdio.h>
int main()
{
    int i=97;
    printf("The alphabets using ASCII values:");
    scanf("%c", &i);
    while(i<=122)
    {
        printf("%c\n", i);
        i++;
    }
}