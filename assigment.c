/*
student name :elina singh thapa
subject:programming fundamental
program:wap to use assignment operator
roll no :
lab sheet:08
date:2016/11/30
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  printf("enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf("%d",&b);
  (a+=b);
  (a-=b);
  (a*=b);
  (a/=b);
  printf("+=%d\n",a);
  printf("-=%d\n",a);
  printf("*=%d\n",a);
  printf("/=%d\n",a);
  getch();
  return 0;
  }
