//author: Saurav Rai
//Implementation of Bubble Sort in C++
#include<iostream>
using namespace std;

 void swap(int * a , int *b)
   {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
   }

void bubblesort(int arr[] , int n)
  {
   for(int i = 0; i<n;i++) 
      for(int j = 0 ; j<n-i;j++) //The i elements in the back of the array will be already sorted.
         if(arr[j]>arr[j+1])     //The highest element in every iteration will be bubbled in the back of the array
            swap(&arr[j],&arr[j+1]);
  }

 void display(int arr[],int n)
   { 
     for(int i=0;i<n;i++)
       {
        cout<<arr[i]<<" ";
       } 
   }
 
 int main()
  {
   int arr[10] = {1,2,7,3,9,0,6,4,5,2};
   cout<<"Before sorting: "<<endl;
   display(arr,10);
   cout<<endl; 
   bubblesort(arr,10);   
   cout<<"after sorting: "<<endl;
   display(arr,10);
   return 0;
  }
  
  
