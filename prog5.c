#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
double n1,n2,n3;
printf("enter the number");
scanf("%lf %lf %lf",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
{
printf("n1");
}
if(n2>=n1 && n2>=n3)
{
printf("n2");
}
if(n3>=n1 && n3>=n2)
{
printf("n3")
}
getch();
}
