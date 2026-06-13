#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}