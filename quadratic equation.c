/*
name:elina singh thapa
subject:programming fundamental
roll no:
program:to find roots of quadratic equation and value of assigned from user
lab sheet no:5
date:23/11/2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x1,x2,a,b,c,dis;
    printf("enter the first number:\n");
    scanf("%f",&a);
    printf("enter the second number:\n");
    scanf("%f",&b);
    printf("enter the third number:\n");
    scanf("%f",&c);
    dis=(b*b)-(4*a*c);
    printf("%f\n",dis);
    x1=(-b+pow(dis,0.5))/(2*a);
    x2=(-b-pow(dis,0.5))/(2*a);
    printf("the first quadratic equation is:\n %.2f\n",x1);
    printf("the second quadratic equation is:\n %.2f",x2);
    getch();
    return 0;
}
