/*

The STL (Standard Template Library) is a collection of predefined classes 
and functions in C++ that provide ready-made data structures and algorithms.

STL
│
├── Containers
├── Iterators
└── Algorithms

1. Containers

Containers are classes used to store data.

| Container       | Description                   |
| --------------- | ----------------------------- |
| `vector`        | Dynamic array                 |
| `list`          | Doubly linked list            |
| `deque`         | Double-ended queue            |
| `stack`         | LIFO structure                |
| `queue`         | FIFO structure                |
| `set`           | Stores unique sorted elements |
| `map`           | Stores key-value pairs        |
| `unordered_set` | Unique elements (unsorted)    |
| `unordered_map` | Key-value pairs (unsorted)    |
*/

//Example : Vectors

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int> nums;
//     nums.push_back(10);
//     nums.push_back(20);
//     nums.push_back(30);

//     for(int i=0;i<nums.size();i++)              //TYPE 1:iteration based on "Indexing"
//     {
//         cout<<nums[i]<<" ";
//     }
// }

/*
2. Iterators

Iterators are objects used to traverse containers.

They work like pointers.   (NOTE)
*/


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> nums ={40,50,60};
//     vector<int>::iterator it;
//     for(it=nums.begin();it!=nums.end();it++)     //TYPE 2:iteration based on "iterators"
//     {
//         cout<<*it<<" ";
//     }

// }


/*
3. Algorithms

STL provides many ready-made algorithms.
| Algorithm       | Purpose           |
| --------------- | ----------------- |
| `sort()`        | Sort elements     |
| `find()`        | Search element    |
| `reverse()`     | Reverse container |
| `count()`       | Count occurrences |
| `max_element()` | Largest element   |
| `min_element()` | Smallest element  |

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> nums= {45,50,30,78,20};

    sort(nums.begin(),nums.end());
for(int x:nums)                                  //TYPE 3: iteration based on "range based for loop"
{
    cout<<x<<" ";
}

}




