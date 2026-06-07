/*
VECTORS : a resizable ( dynamic ) array

Unlike a normal array, a vector can grow or shrink in size at runtime.
*/

#include<iostream>
#include<vector>            //this brings only vector
//#include<bits/stdc++.h>   //this brings all STL libraries
#include<algorithm>
using namespace std;

int main(){
    //Declaration
    vector<int> nums1;                  //type 1:Empty Vector
    vector<int> nums2={10,20,30,40,50}; //type 2:vector with initial values 
    vector<int> nums3(5);               //type 3: vector of size 5 : {0,0,0,0,0}
    vector<int> nums4(5,100);           //type 4:vector of size 5 with '100' : {100,100,100,100,100}

    //Adding Elements
    nums1.push_back(23);
    nums1.push_back(34);

    //Accessing Elements
    cout<<nums1[1]<<endl;         //using index 
    cout<<nums1.at(1)<<endl;      //using at()      //SAFE: throws out of range error 

    cout<<nums2.front()<<endl;    //First Element
    cout<<nums2.back()<<endl;     //Last Element

    //Size of a vector
    cout<<nums2.size()<<endl;

    //Checking if Empty
    cout<<nums2.empty()<<endl;
    
    //Traversing a vector
        //Method 1: Index
        for(int i = 0; i < nums2.size(); i++)
        {
            cout << nums2[i] << " ";
        }

        //Method 2: Iterator
        for(auto it = nums2.begin(); it != nums2.end(); it++)   //auto keyword accepts all datatypes.
        {
            cout << *it << " ";
        }

        //Method 3: Range Based For Loop
        for(auto it = nums2.begin(); it != nums2.end(); it++)
        {
            cout << *it << " ";
        }

    //Removing elements
    nums2.pop_back();   //removing last element

    //Insert at a Specific Position
        //syntax:
        //nums.insert(nums.begin()+index,element);
        //nums2={10,20,30,40}
        nums2.insert(nums2.begin()+3,35);
        cout<<endl;
        for (int x: nums2)
        {
            cout<<x<<" ";       //expected {10,20,30,35,40}
        }                       //Index:   {0, 1, 2, 3, 4}
        cout<<endl;

    //Erase at specific position
        //syntax: (to erase 30)
        //nums.erase(nums.begin()+index)
        nums2.erase(nums2.begin()+2);
        for (int x: nums2)
        {
            cout<<x<<" ";       //expected {10,20,35,40}
        }                       //Index:   {0, 1, 2, 3 }
        cout<<endl;

    //Remove multiple elements
        vector<int> nums5={23,34,45,56,67,78};
        //index :         {0 ,1 ,2 ,3 ,4 ,5 }
        //syntax : (to remove 45 to 67)
        //nums.erase(nums.begin()+startindex,nums.begin()+endindex+1);  //it removes interval [begin,end)
        nums5.erase(nums5.begin()+2,nums5.begin()+4+1);
        for(int x:nums5)
        {
            cout<<x<<" ";   //expected  {23,34,78}
        }
        cout<<endl;
    //remove by value
        /*
                remove() DOES NOT delete elements.
            It shifts non-matching elements to the front
            and returns an iterator to the new logical end.

            erase() is then used to physically remove
            the leftover elements.

            erase(remove(begin,end,value), end);
        */
        cout<<"Removing by value :"<<endl;      //removing "20" occurence
        vector<int> nums = {10,20,30,20,40,20};
        auto newend =remove(nums.begin(), nums.end(), 20);   //{10 30 40 ? ? ?} and returns an iterator to the "new logical end"
        //nums.erase(newend, nums.end());                               ⬆️newend   

        for(int x : nums)
        {
            cout << x << " ";
        }
    //clear entire vector
        nums3.clear();
        cout<<endl;
        cout<<nums3.size()<<endl;

    //resize 
        nums5.resize(5);
        for(int x: nums5)
        {
            cout<<x<<" ";   //expected {23,34,78,0,0}
        }
        cout<<endl;
    //reverse vector
        reverse(nums5.begin(),nums5.end());
        for(int x: nums5)
        {
            cout<<x<<" ";   //expected {0,0,78,34,23}
        }
        cout<<endl;
    //searching
        auto it = find(nums5.begin(),nums5.end(),34);   //stores address in it 
        if (it!=nums5.end())        //because nums5.end() points to the element past the last
        {
            cout<<"Element Found :"<<endl;
            int index = it - nums5.begin();
            cout<<"found at index :"<<index<<endl;  //expected : 3
        }
    //counting occurences
        int num = count(nums5.begin(),nums5.end(),0);
        cout<<num<<endl;        //expected : 2

    //maximum and minimum
        int max = *max_element(nums5.begin(),nums5.end());  //because max_element() returns address 
        cout<<max<<endl;    //expected : 78
    //2D vectors 
        vector<vector<int>> matrix = 
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        cout<<matrix[1][2]<<endl;       //expected : 6
        cout<<nums5.size()<<endl;       //expected : 5
        cout<<nums5.capacity()<<endl;  
        // size() = number of elements currently stored
        // capacity() = total elements that can be stored before reallocation
        // size() = passengers in the bus, capacity() = total seats in the bus

    }

    /*
Most Important Vector Functions:

push_back()
pop_back()

size()
capacity()
empty()

front()
back()

at()

begin()
end()

clear()

resize()

//////

insert()
erase()
sort()
reverse()
find()
    */