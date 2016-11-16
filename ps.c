/*
student name:elina singh thapa
subject:programming fundamental
roll no:
lab no:
program :
write a c program to print product and sum of three numbers asked from users
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c,sum, product;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
sum=a+b+c;
product=a*b*c;
printf("sum of three numbers is %d",sum);
printf("product of three numbers is %d",product);
getch();
return 0;
}

