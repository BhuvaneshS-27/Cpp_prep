#include<iostream>
#include<string>

using namespace std;
int main(){

    int n=5;
    for(int i=1; i<=n;i++)
    {
        cout<<i<<endl;

    }

    //S2: Range based for loop 

    /*
    A range-based for loop is a simpler way to iterate through all elements of a collection like:

arrays
strings
vectors
sets
maps */

//example using array
int nums[]={10,20,30,40};
for(int x:nums){
    cout<<x<<endl;
}

//Equivalent Normal for Loop

for(int i=0;i<4;i++)
{
    cout<<nums[i]<<endl;
}

//example using strings

string name = "Bhuvanesh";
for (char s:name)
{
    cout<<s<<endl;
}

//USE CASE: Changing "s" does not change original string.
//To modify original elements → use reference
for(int &x : nums) {
    x = x * 2;      //modification 
    cout<<x<<endl;
}
for(int j=0;j<4;j++)
cout<<nums[j];      //original array

}