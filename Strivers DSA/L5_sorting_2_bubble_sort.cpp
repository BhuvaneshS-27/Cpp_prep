#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
   for(int i=0;i<=n-2;i++)
   {
    for(int j=0;j<=n-2-i;j++)
    {
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
   }

}

int main(){
    int arr[]={13,46,24,52,20,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}