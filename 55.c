#include<stdio.h>
int main()
{
    int n,p,rev,rem;
    printf("Enter the number:");
    scanf("%d", &n);
    p=n;
    for(rev=0;n>0;)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==p){
        printf("PALLINDROME");
    }
    else{
        printf("NOT PALLINDROME");
    }
}
