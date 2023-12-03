#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of registration no.\n");
    scanf("%d", &x);
    switch(x)
    {
        case 2341001:
            printf("Dimpy Mittal\n");
            break;
        case 2341002:
            printf("Sudipto\n");
            break;
        case 2341003:
            printf("Akanksha\n");
            break;
        case 2341004:
            printf("Naresh\n");
            break;
        default:
            printf("The student is not from GCS batch 2023 1st year.");
    }
}