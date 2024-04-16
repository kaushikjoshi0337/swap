#include<stdio.h>
#include<conio.h>

main()
{
int a;
int b;
int ans;
clrscr();
 printf("enter value of x\n");
 scanf("%d",&a);
 printf("value of x %d",a);

 printf("enter the value of y\n");
 scanf("%d",&b);
 printf("value of y %d",b);

  ans=(a*a)+(b*b)+(2*a*b);
  printf("total value is%d",ans);

getch();
}