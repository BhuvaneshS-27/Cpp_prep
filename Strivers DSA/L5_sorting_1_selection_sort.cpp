#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n)     //O(N^2)
{
    
    int min_index;
    for(int i=0;i<=n-2;i++) //comparison loop
    {
        min_index=i;
        for(int j=i;j<=n-1;j++) //loop to find minimum
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}