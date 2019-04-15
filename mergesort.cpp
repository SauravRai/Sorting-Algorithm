//author: Saurav Rai
//Implementation of Merge Sort in C++ 
#include<iostream>
using namespace std;
void printArr(int arr[], int);
void mergeSort(int arr[], int , int );
void merge(int arr[], int ,int , int); 

int main()
 {
   int arr[]  = {4,3,12,45,2,0,9};
   int n = sizeof(arr)/sizeof(arr[0]); 
   cout<<"The array before sorting is:"<<endl;
   printArr(arr,n);
   mergeSort(arr,0,n-1);
   cout<<"The array after sorting is:"<<endl;
   printArr(arr,n);
  return 0;   
 }

void printArr(int arr[], int n)
 {
  for(int i = 0;i<n;i++)
   {
    cout<<arr[i]; 
   }
 }

void merge(int arr[], int l , int m ,int h)
  {
    int n1 = m-l+1;
    int n2 = h-m;
    //create the two arrays
    int L[n1];
    int R[n2];
    //Put all the elements of arr in L and R 
    int ii , jj ;
    for(ii =0;ii<n1;ii++)
     {
      L[ii] = arr[l+ii];
      ii++;
     }
     for(jj =0;jj<n2;jj++)
     {
      R[jj] = arr[m+1+jj];
      jj++;
     } 
     int i =0;
     int j =0;
     int k =0;
     //need to put elements in the new combines sorted array
    while(i <n1 && j<n2)
      {
         if(L[i]<R[j])
            {
             arr[k] = L[i];
             i++;
           
             }             
         else
            {
             arr[k] = R[j];
             j++;
             }
           k++;
      }   
     while(i<n1)
        {
          arr[k] = L[i];
          i++;
          k++; 
        }
               
     while(i<n2)
        {
          arr[k] = L[j];
          j++;
          k++; 
       }
  }

void mergeSort(int arr[],int l, int h)
 {
   int m;
   if(l<h)
     m = l + (h-l)/2;
   mergeSort(arr,l,m);
   mergeSort(arr,m+1,h);
   merge(arr,l,m,h);  
 }
