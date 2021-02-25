#include<iostream>
using namespace std;


void swap(int *x ,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[],int l,int h){

    int pivot = arr[h] ;
    int i=l-1 , j ;
    for(j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    
    return i+1;
}

void Quicksort(int arr[],int l,int h){
   if(l<h)
   {
       int pivot;
       pivot = partition(arr,l,h);
       Quicksort(arr,l,pivot-1);
       Quicksort(arr,pivot+1,h);
   }
}

void printArray(int arr[],int n){
    int i;
    cout<<"Sorted Elements:";
    for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
}


int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the elements :";
    for(i=0;i<n;i++)
    cin>>a[i];
    
    Quicksort(a,0,n-1); 
    printArray(a,n);
    return 0;
}