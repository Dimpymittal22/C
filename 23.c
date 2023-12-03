#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    do{
        if(i%2!=0)
       {
         printf("%d\n", i);
       }
        i++;
    }while(i<=n);
}