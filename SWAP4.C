#include<stdio.h>
#include<conio.h>
main()
{
int a;
int b;
int ans;
clrscr();
 printf("enter the value of c\n");
 scanf("%d",&a);
 printf("value of a%d\n",a);

 printf("enter the value of d\n");
 scanf("%d",&b);
 printf("value of b%d\n",b);

 ans=(a*a)+(b*b)-(2*a*b);
 printf("total value of%d",ans);


getch();
}