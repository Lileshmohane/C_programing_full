#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    
    printf("enter the value of a : \n",a);
     
    printf("enter the value of b :\n",b);
    char op;

     
    printf("enter the operation what you perform : ",op);
   
    switch (op)
    {
       case 1:
        printf("a+b");
        break;
         case 2:
        printf("a-b");
        break;
         case 3 :
        printf("a*b");
        break;
         case 4:
        printf("a/b");
        break;
    default:
        break;
    }
    return 0;
}