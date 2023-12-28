#include<stdio.h>
int main()
{
    int n,i=2,flag=1;
    printf("Enter the number:");
    scanf("%d", &n);
    while(i<n)
    { 
        if(n%i==0)
        {
            flag=0;
        }
        i++;   
    }
    if(flag)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}