/*
LIST : Doubly Linked List

Unlike vectors, elements are NOT stored in contiguous memory.

Advantages:
- Fast insertion/deletion anywhere
- Dynamic size

Disadvantages:
- No indexing (list[0] is invalid)
- Slower traversal than vectors
*/


#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){

    // Declaration
    list<int> nums1;                    // Empty list
    list<int> nums2 = {10,20,30,40,50}; // List with initial values
    list<int> nums3(5);                 // {0,0,0,0,0}
    list<int> nums4(5,100);             // {100,100,100,100,100}

    // Adding Elements
    nums1.push_back(20);
    nums1.push_back(30);

    nums1.push_front(10);
    
    // nums1 = {10,20,30}

    // Accessing Elements
        cout << nums1.front() << endl;      // First element : 10
        cout << nums1.back() << endl;       // Last element  : 30
    
    // Size
        cout << nums1.size() << endl;       //expected :3

    // Empty check
        cout << nums1.empty() << endl;      //expected :0
    // Clear Entire List
        nums3.clear();

    //traversing 

        //method 1: iterator
            cout<<"Using Iterator"<<endl;
            for(auto it=nums1.begin();it!=nums1.end();it++)
            {
                cout<<*it<<"    ";
            }
            cout<<endl;
        cout<<"Using Range Based Loop :"<<endl;
        //method 2: Range based loop
            for (int x : nums1)
            {
                cout<<x<<" ";           //10,20,20
            }
            cout<<endl;

    //Removing Elememts
        nums1.pop_front();  //removes 10
        nums1.pop_back();   //removes 30
        for(int x : nums1)
        {
            cout << x << " ";   // expected : 20
        }
        cout << endl;

    // Insert at Specific Position  //nums2={10,20,30,40,50}
                                    //pos:   
        auto it = nums2.begin();

        advance(it,2);      // move iterator to index 2
                                    //nums.insert(nums.begin()+2, 25);  // ❌ Error
        nums2.insert(it,25);        //lists do not support: it + n A list is a linked list. 
                                    //To reach the 3rd element, it must follow 
                                    //links one by one:10 <-> 20 <-> 30 <-> 40
                                    //so we use advance(it,position) to iterate

        for(int x : nums2)
        {
            cout << x << " ";   //expected : 10,20,25,30,40,50
        }
    // Erase at Specific Position
        it = nums2.begin();

        advance(it,2);      // points to 25

        nums2.erase(it);

        for(int x : nums2)
        {
            cout << x << " ";   // expected : 10 20 30 40 50
        }
        cout << endl;
        
    //removing multiple elements : (only possible through iterators)
        list<int> nums = {23,34,45,56,67,78};

        auto start = nums.begin();
        advance(start, 2);    // points to 45

        auto end = nums.begin();
        advance(end, 5);      // points to 78

        nums.erase(start, end);     //removes 45,56,67
                                    //result nums= {23,34,78}

    //remove element by value (❌ no direct function available in vector)
        //nums2={10,20,30,40,50}
        nums2.remove(30);
        for(int x : nums2)
        {
            cout << x << " ";
        }
        // expected : 10 20 40 50
        cout << endl;
    //reverse list
        nums2.reverse();

        for(int x : nums2)
        {
            cout << x << " ";
        }
        // expected : 50 40 20 10
        cout << endl;
    // Sort List
        nums2.sort();

        for(int x : nums2)
        {
            cout << x << " ";
        }
        // expected : 10 20 40 50
        cout << endl;
    // Unique (removes consecutive duplicates)
        list<int> nums5 = {10,10,20,20,30,30};

        nums5.unique();

        for(int x : nums5)
        {
            cout << x << " ";
        }
        // expected : 10 20 30
        cout << endl;

    //merge two lists
        list<int> l1 = {10,20,30};
        list<int> l2 = {40,50,60};

        l1.splice(l1.end(), l2);

        for(int x : l1)
        {
            cout << x << " ";
        }
        cout<<endl;
    // Merge Two Sorted Lists
        list<int> a = {10,20,30};
        list<int> b = {5,25,35};

        a.merge(b); //❗NOTE : only applicable for sorted lists 

        for(int x : a)
        {
            cout << x << " ";
        }
        // expected : 10 15 20 25 30 35
        cout << endl;

    //searching 
        list<int> nums6 = {10,20,30,40,50};

        auto iter = find(nums6.begin(), nums6.end(), 30);

        if(iter != nums6.end())
        {
            cout << "Found: " << *iter << endl;
        }
        else
        {
            cout << "Not Found";
        }
        cout<<"at position :"<< distance(nums6.begin(),iter);   //int index = it-nums().begin(); ❌ no support 
                                                                //because list DONT support +,-

        }


/*
Most Important List Functions

push_back()
push_front()

pop_back()
pop_front()

front()
back()

size()
empty()

insert()
erase()

remove()

sort()
reverse()

unique()

merge()

clear()

advance(iterator,n)
*/