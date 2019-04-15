//author: Saurav Rai
//Implementation of Quick Sort in C++
#include<iostream>

using namespace std;

void printArray(int arr[],int size)
  {
    for(int i=0;i<size;i++)
       {
       cout<<arr[i];  
       }
    cout<<endl;
  }


//int &a = b; a is a reference if b

void swap(int &a, int &b)
 {
   int temp;
   temp = a;
   a = b;
   b= temp;
 }


int partition(int a[],int low,int high)
{
 int index = low;
 int pivot = high;

 for(int i = low;i<high;i++)
   {
    if(a[i]<a[pivot])
     {
        swap(a[i],a[index]);
        index++;
     }
    }
   swap(a[index],a[pivot]);
  return index;
}


void quickSort(int arr[], int low, int high)
 {
  int pivot_index;
  if(low<high)
    { 
    pivot_index = partition(arr,low,high);
    quickSort(arr,low,pivot_index-1); 
    quickSort(arr,pivot_index+1,high);
    }
 }


int main()
 {

  int arr[] = {10,7,8,9,1,5};
  //Each is 4 bits here n is 24/4 =6
  int n = sizeof(arr)/sizeof(arr[0]);
  quickSort(arr,0,n-1);
  printArray(arr,n);
  return 0;
}

