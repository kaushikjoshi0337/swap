#include<stdio.h>
#include<conio.h>
main()
{
int a=10;
int b= 20;
clrscr();
printf("before value is a %d\n",a);
printf("before value is b %d\n",b);

a=a+b;
b=a-b;
a=a-b;

printf("afetr value is a%d\n",a);
printf("after value is b%d\n",b);




getch();
}