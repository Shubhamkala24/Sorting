#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;        
    }
}

void printArray(int arr[],int n)
{
    int i;
    cout<<"Sorted Elements :";
    for(i=0;i<n;i++)
    {
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
    
    Insertion_sort(a,n); 
    printArray(a,n);
    return 0;
}