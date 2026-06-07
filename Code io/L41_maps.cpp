
#include<iostream>
#include<map>
using namespace std;

/*
Maps in C++ STL
A map stores data as key-value pairs.

eg:
map<string, int> marks;
Key      Value
-----    -----
Alice      90
Bob        85
Charlie    95

*/
int main(){
    //Declaration
        //empty map
       
        map <string , int> marks;
    //Initialization
        map<int , string> students={
            {101,"Alice"},
            {102,"Bob"},
            {103,"Charlie"}
        };
    //Inserting Elements
        //Method 1: Using []
            marks["Alice"]=90;
            marks["Bob"]=85;
        //Method 2: Using insert()
            marks.insert({"Charlie",95});
    //Accessing Values
        //Using []
            cout<<marks["Alice"]<<endl;
        //Using at()
            cout<<marks.at("Bob")<<endl;
    //Traversing a Map
        //by Range Based For Loop
            for(auto x: marks)
            {
                cout<<x.first<<": "<<x.second<<endl;    //calling of variables , not functions 
            }
        //by iterator
            for (auto it1 =marks.begin();it1!=marks.end();it1++)
            {
                cout<<(*it1).first<<" : "<<(*it1).second<<endl;
            }
    //Size 
        cout<<marks.size()<<endl;   //expected :3
    //Empty Check
        cout << marks.empty()<<endl;
    //Searching
        auto it2 = marks.find("Bob");
        if(it2 != marks.end())
        {
            cout << "Found"<<endl;
        }
    //Erase 
        //by key
            marks.erase("Bob");
        //by iterator 
            auto it3=marks.find("Alice");
            marks.erase(it3);
    //Clear Entire Map
        marks.clear();
    //Sorted Order: Maps automatically sort by key.
        map<int,string> m;

        m[3] = "C";
        m[1] = "A";
        m[2] = "B";
        for(auto x:m)
        {
        cout<<x.first<<": "<<x.second<<endl;    //calling of variables , not functions 
        }
    //Descending Order Map
    map<int,string, greater<int>> map2;

    //Lower Bound - Returns first key ≥ value.
    auto it4 = students.lower_bound(102);
    //Upper Bound - Returns first key > value.
    auto it5 = students.upper_bound(102);

    /*
Unordered Map in C++ STL
    An unordered_map stores data as key-value pairs, just like a map.

The difference is:

map → stores keys in sorted order
unordered_map → stores keys in no particular order

Internally, an unordered map uses a hash table.


#include <unordered_map>
//Declaration
unordered_map<string,int> marks;
EVERYTHING IS JUST SAME
    */
}