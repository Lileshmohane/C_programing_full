#include<stdio.h>
#include<conio.h>

 void display( int arr[], int size ){

     for (int  i = 0; i < size; i++)
     {
         printf(" %d ",arr[i]);
     }
     printf("\n");
    
     }
    int  intinsertion(int arr[],int size, int element, int index ,int capicity ){
 if (size>=capicity)
 {
     return 0;
 }
 for (int  i = size-1; i >=index; i--)
 {
     arr[i+1] = arr[i];
 }
 arr[index] =element;
 return 1;

 }
int main(){
     int arr[100] ={ 1,2,3,4,5};
      int size = 5, element = 11, index = 1 ;

      display(arr,size);
          intinsertion(arr, size,element, 100, index);
       size+=1;
       display(arr,size);
    return 0;
}