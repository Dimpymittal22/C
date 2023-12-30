//Fibonacci series
 #include<stdio.h>
int main()
{
    int i=3,n,a=0,b=1,nextTerm;
    printf("Enter the number:");
    scanf("%d", &n);
        nextTerm=a+b;
    printf("Fibonacci series is \n%d\n%d\n", a,b);
        while(i<=n)
        {
            nextTerm=a+b;
            printf("%d\n", nextTerm);
            a=b;
            b=nextTerm;
            i++;
        }
}