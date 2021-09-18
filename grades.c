#include <stdio.h>
void main()
{
  printf("enter the percentage of student:");
  int marks=0;
  scanf("%d",&marks);
  if (marks>=85)
     printf("student has achived A grade");
     else if (marks>=70 && marks<84)
     printf("student has achived B grade");
     else if (marks>=55 && marks<69)
     printf("student has achived C grade");
     else if (marks>=40 && marks<54)
     printf("student has achived D grade");
     else 
     printf("student has achived f grade");
}
  
