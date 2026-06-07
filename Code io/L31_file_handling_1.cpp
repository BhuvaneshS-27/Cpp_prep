#include<iostream>
#include<fstream>   //file stream : File Handling Library
#include<string>

/*
fstream library has
| Class      | Purpose             |
| ---------- | ------------------- |
| `ifstream` | Read from a file    |
| `ofstream` | Write to a file     |
| `fstream`  | Read and write both |    
*/

using namespace std;
int main(){
    //to write into a file - ofstream : output file stream(writing)
    ofstream file1("L31_WritingMode.txt"); //creating obj to the class, and passing args(ie filename) to its constructor
    file1<<"This is a sample file."<<endl;
    file1.close();

    //to append to a file
    ofstream file2("L31_AppendMode.txt",ios::app);
    file2<<"2st Line"<<endl;
    file2.close();

    //read a file : ifstream - input file stream
    string text;

    ifstream file3("L31_book.txt");
    file3>>text;            //similar to cin - whitespace makes it think like 2 different input
    cout<<text<<endl;
    file3>>text;
    cout<<text<<endl;
    file3.close();

    //Read a file Using getline(file, variable)
    ifstream file4("L31_book.txt");
    getline(file4,text);    //get only 1 line until \n 
    cout<<text<<endl;
    file4.close();

    //Read entire file 
    ifstream file5("L31_book.txt");
    while(getline(file5,text))
    {
        cout<<text<<endl;
    }
    file5.close();

    //both reading and writing at the same time (NOT recommended)

}

