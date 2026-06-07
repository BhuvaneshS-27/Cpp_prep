#include<iostream>
using namespace std;
int main (){
    //logical operators 
    //AND , OR , NOT 
    // inputs are true -1 , false -0
    

// Logical Operators
/*
&& - Logical AND
|| - Logical OR
!  - Logical NOT
*/

cout << (true && true)<<endl;
cout<< (true || false)<<endl;
cout<< (!false)<<endl;

char gender = 'M';
int age =24;
cout<<(gender=='M'&& age>=18)<<endl;

}