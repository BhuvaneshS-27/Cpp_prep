#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--) //i fixing the last limit 
    {
        bool didSwap=0;
        for(int j=0;j<=i-1;j++) //iterating and swapping upto the last minute
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0)
        break;
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