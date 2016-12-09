/*
student name:nikita lama
subject     :programming fundamental
roll no     :20
lab no      :10
program     :write a c program to check either number is even or oddusing ternary operator
date        :7 dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    (a%2==0)?printf("%d is even",a):printf("%d is odd",a);
   getch();
   return 0;
}
