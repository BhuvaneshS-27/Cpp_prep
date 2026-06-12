#include<bits/stdc++.h>
using namespace std;
/*
Hashing in C++

Hashing is a technique used to store and retrieve data efficiently, 
usually in O(1) average time.

A hash function converts a key (such as an integer, string, etc.) into an index 
in a table called a hash table.
*/

//NUMBER HASHING:
int main(){
    //getting array
    int n;
    cout<<"Enter the no of elements in an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //creating hash[size], size-> max(array)+1;
    int size = 16; //0 to 15 numbers are maintained
    int hash[size]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;     //precompute
    }

    //fetch
    int query;
    while(1){
        cout<<"\n Enter the element to be counted:";
        cin>>query;
        if(query<0)
        break;
        cout<<"Occurence of "<<query<<" :"<<hash[query];

    }
}

/*
Maximum size of int array : 10e6 (inside main) , 10e7 (outside main)
Maximum size of bool array : 10e7 (inside main) , 10e8 (outside main)

outside this range -> segmentation fault


*/
