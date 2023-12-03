#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number :");
    scanf("%d", &n);
    do{
        printf("%dx%d=%d\n", n,i,n*i);
    }while(i++,i<=10);
}