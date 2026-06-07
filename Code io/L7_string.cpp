#include<iostream>
#include<string>
using namespace std;
int main (){

    string firstname = "goms";
    string lastname = "A";
    cout<<firstname+" "+lastname<<endl;   // string concatination
    //+ Creates new string
    cout<<firstname<<" "<<lastname<<endl; // another way

    //another method for concatenation: str1.append(str2)
    cout<<firstname.append(lastname)<<endl;
    //"append" Modifies existing string


    //S2: Finding the length of string.(both perform same function)
    cout<<firstname.length()<<endl;  // since "append" modified "firstname"
    cout<<firstname.size()<<endl;    // used in STL containers 


    //S3: accessing individual elements of a string 
    string city = "chennai";
    cout<<city[2]<<endl;    // accessing the third character (method 1)
    cout<<city.at(2)<<endl; // accessing the third character (method 2)

    //S4: accessing the last element 

    cout<<city[-1]<<endl; // C++ strings do not support negative indexing.
    cout<<city[city.length()-1]<<endl; // prints the last element

    //S5: modifying a string by accessing individual positions
    city[2]='o';
    cout<<city<<endl;

    //S6: Applicability of escape sequence in string 
    string statement = " I am \n Bhuvanesh";
    cout<<statement<<endl;

    //S7 : getting string as input 
    string fullname ;

    cout<<"enter full name :";
    cin>>fullname;
    cout<<"Your fullname is "<<fullname<<endl; 

    //cin >> stops reading input when it finds: space, tab, newline.
    // Method to get a sentence as input 
    // WARNING : If two words are entered , it gets stored in the buffer.
    // if single word is entered , to clear the leftover newline(\n) character use cin.ignore();

    cin.ignore();
    string newname;

    cout<<"enter new name :";
    getline(cin , newname );
    cout<<"\n Your newname is "<<newname<<endl; 

/* Sample input :
enter full name :bhu
Your fullname is bhu
enter new name :bhu sad

 Your newname is bhu sad
PS D:\UserData\Desktop\Cpp_prep> 
*/

}