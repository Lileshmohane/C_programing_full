
 #include<stdio.h>
 #include<conio.h> 
  
   int linearsearch ( int arr[], int size, int element )
   {
      for (int  i = 0; i <size; i++) {
          if (arr[i]==element)
          {
           return i;
          }
         
      }
        return -1;
  }
   int binarysearch( int arr[], int size , int element ){

        int low , mid , high ;
         low = 0;
         high = size-1;
         while (low<=high){
         
          mid = (low+high)/2;
          if (arr[mid]== element)
          {
             return mid;
          }
        if ( arr[mid]<element )
        {
            low = mid +1;
        }
        else
        {
        high = mid-1;
        }
        
   }
   return-1;
   }
 int main(){
      
       int arr[] ={ 22,33,44,55,66};
        int size = sizeof(arr)/sizeof(int);
         int element  = 1 ;
         int searchindex = linearsearch(arr,size, element);
       printf("the element %d is found in index %d  \n ", element, searchindex);
      // functionn coll 

     return 0;
 }