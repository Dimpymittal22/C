#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=2;i<n;i++)
    {
        if(n%i==0){
        flag=0;
    }
    }
    if(flag)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.", n);
}
