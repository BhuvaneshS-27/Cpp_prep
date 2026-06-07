
#include<iostream>
#include<set>
using namespace std;

//A set is an STL container that stores unique elements in sorted order.
/*
Properties of a Set

✅ Elements are automatically sorted

✅ Duplicate values are not allowed

✅ Fast searching, insertion, and deletion

❌ No indexing (s[0] is invalid)
*/

int main(){
    //declaration 
        //Empty Set
        set <int> nums; 
        //set with initial values
        set<int> s = {40,10,30,20,10,20};

    //inserting elements
        nums.insert(5);
        nums.insert(7);
        nums.insert(3); //if an element already exists ,it is ignored 
    //Traversing a Set
        //Iterator
        for(auto it = s.begin();it!=s.end();it++)
        {
            cout<<*it<<"  ";
        }
        cout<<endl;
        //range based loop
        for (int x:s)
        {
            cout<<x<<"  ";
        }
        cout<<endl;
    //Size
        cout<<s.size()<<endl;   //expected : 4
    //Empty Check
        cout << s.empty()<<endl;    //expected : 0
    //searching 
        auto iter=s.find(30);
        if(iter != s.end())
        {
            cout << "Found";
        }
        cout<<endl;
    //erase 
        //by value 
            s.erase(20);    //s={10 30 40}
        //by Iterator
            auto it = s.find(30);
            s.erase(it);
    //Clear Entire Set
        s.clear();
    //Accessing elements        nums={3,5,7}
        //first element
            cout << *nums.begin()<<endl; //expected : 3
        //last element
            cout<<*prev(nums.end())<<endl;//expected :7
        //Lower Bound - returns first element greater than or equal to the value 
            set <int> s2= {34,23,45,67,12};
            auto it2= s2.lower_bound(45);    //returns address
            cout<<*it2<<endl;                //expectted : 45
        //Upper Bound - Returns first element strictly greater than the value
            auto it3 = s2.upper_bound(45);
            cout<<*it3<<endl;                 //expected : 67
        
    //Interview IMP : 
        //To implement a Descending Order Set
        set<int, greater<int>> s3;
        //reason :
        //Internally, set<int> s; equivalent to: set<int, less<int>> s; //ie all elements are compared and lesser are given prior positions 
        //The general form is:set<DataType, Comparator> name;
    /*
SET-SPECIFIC FUNCTIONS

insert()

find()

count()

lower_bound()

upper_bound()

erase()

//////////////////////

No Indexing:
------------
operator[] ❌
at()       ❌

No Front/Back:
--------------
front() ❌
back()  ❌

Use:
-----
*s.begin()          // smallest element

*prev(s.end())      // largest element
*/

}