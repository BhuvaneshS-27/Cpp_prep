//reverse elements present in an array
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i , int arr[], int n)
{
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}
int main()
{   //if start element=i , end element=n-i-1;

     
    int n=5;
    int arr[n]={34,23,45,67,12};
    reverseArray(0,arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";
    }


}
