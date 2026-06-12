//FIND THE HIGHEST AND LOWEST FREQUENCY ELEMENT IN AN ARRAY
#include<bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int>& nums) 
{
    int freq=-1;
    int mostfreq =1;
    map<int,int> mpp;
    for(auto i=0;i<=nums.size();i++)
    {
        mpp[nums[i]]++;
    }
    for(auto i:mpp)
    {
        if(i.second>freq)
        {
            mostfreq=i.first;
            freq=i.second;
        }
    }
    return mostfreq;
        

}
int main()
{
    vector<int> nums={3,3,2,2,4,4,4,5,5,6,6};
    cout<<mostFrequentElement(nums);
}