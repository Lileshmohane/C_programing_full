#include<stdio.h>
#include<conio.h>
// three type of control statement 
int main(){
    // 1 conditional stetment 

    /*the if statement 
     if ( the statement */
     int age ;
     age = 20;
     if(age>=18 )/* condition */
     {
        printf("you are not allo to give a vote  your age is :%d",age);
     }
     /* 
     the if else statement
     */
    int sallry;
     sallry = 25000;
    if ( sallry>= 50000)
    {
        printf("your salary is verry  good ");
    }
    else if (sallry>=25000)
    {
        printf("you salary is  good ");
    }
     else
     {
         printf("your salary is not a good ");
     }
     //the nested if stetment 
     int a,b,c ;
     if (a<b)
     {
         if (a>c)
         {
             printf("a is greater");
         }
         
         else
         {
             printf("c is greater ");
         }
         
     }
      else
      {
        printf("b is greater");
      }
      

     
    return 0;
}