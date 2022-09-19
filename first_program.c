// syntax
#include<stdio.h> //pre define directry     hydrofile  standerd input and output
#include<conio.h> //  cansole input and output 
/* I take a variable fuction  to make a program*/

int main()  // int is a datatipe  main is a function 
{ 
    //calulate a simple intrested 
    int p,n ; //p and n variable 
    float r,si; 
    printf("enter a value of p and r and n ");  // printf is pre define  function it is use to take a output of program in a compiler 
    scanf("%d %d %f" ,&p, &n,&n);   // scanf is pre define  function it is use to take a input  of program in a compiler  %d is use a take ainput in a number 
    si = p*n*r/100;
    printf("you get %f ",si);
    return 0;
} 