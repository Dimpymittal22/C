#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest", a);
    }
    else if(b>c){
        printf("%d is the greatest", b);
    }
    else if(a==b && b==c){
        printf("All three numbers are equal.");
    }
    else{
        printf("%d is the greatest.", c);
    }
}