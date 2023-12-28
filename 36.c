#include<stdio.h>
int main()
{
    char i;
    printf("Enter the alphabet:");
    scanf("%c", &i);
    while(i<='z')
    {
        printf("%c\n", i);
        i++;
    }
}