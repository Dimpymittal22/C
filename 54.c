#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number:\n");
    scanf("%d", &n);
    {
        printf("Even numbers:\n");
            for(i=2;i<=n;i++)
        { 
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
    }
    {
        printf("Odd numbers:\n");
            for(j=1;j<=n;j++)
        { 
            if(j%2!=0)
            {
               printf("%d\n",j);  
            }
        }
    }
}
