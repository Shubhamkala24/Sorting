#include<iostream>
using namespace std;
 
 void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

 void Selection_sort(int arr[],int n){
     int i,j;

     for(i=0;i<n-1;i++){

         int min = i;

         for(j=i+1;j<n;j++){

             if(arr[j]<arr[min]){
             min = j;
             }
         }
         swap(&arr[i],&arr[min]);
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
    
    Selection_sort(a,n);
    printArray(a,n);
    
    return 0;

}