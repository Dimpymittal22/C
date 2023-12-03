#include<stdio.h>
int main()
{
    int total,percentage,phys,chem,maths;
        printf("Enter marks of physics, chemistry, maths");
        scanf("%d%d%d",&phys, &chem,&maths);
            total=phys+chem+maths;
            percentage=(total*100)/300;
        printf("The total marks are:%d\n", total);
        printf("The percentage is:%d\n", percentage);
    if(percentage>=33)
        printf("PASS\n");  
    else
          printf("FAIL\n");
      if(91<=percentage && percentage<=100)
      {
          printf("A+\n");
      }
      if(81<=percentage && percentage<=90)
      {
          printf("A\n"); 
      } 
      if(71<=percentage && percentage<=80)
      { 
          printf("B+\n");
      }
      if(61<=percentage && percentage<=70)
      {
          printf("B\n");
      }
      if(51<=percentage && percentage<=60)
      {
          printf("C+\n");
      }
      if(41<=percentage && percentage<=50)
      {
          printf("C\n");
      }
      if(33<=percentage && percentage<=40)
      {
          printf("D\n");
      }
      else
      {
          printf("E\n");
      }
}