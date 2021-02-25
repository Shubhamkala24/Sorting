#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Bubble_sort(int arr[],int n){
     
     int i,j;
     
     for(i=0;i<n;i++){
       
         for(j=0;j<n-i-1;j++){
        
             if(arr[j]>arr[j+1])
         
                  swap(&arr[j],&arr[j+1]);
         }
     }
}

void printArray(int arr[],int n){
    int i;
    cout<<"Sorted elements ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the elements :";
    for(i=0;i<n;i++)
    cin>>a[i];
    
    Bubble_sort(a,n);
    printArray(a,n);
    
    return 0;

}