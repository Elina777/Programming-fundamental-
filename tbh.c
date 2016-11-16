/*
student name:elina singh thapa
subject:programming fundamental
rollm no:
lab no:
program:write a c program to print area of triangle,base&height are asked from users
date:nov16,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int b,h,area;
printf("enter value of base");
scanf("%d",&b);
printf("enter value of height");
scanf("%d",&h);
area=1/2*(b*h);
printf("area of triangle is %d\n",area);
getch();
return 0;
}
