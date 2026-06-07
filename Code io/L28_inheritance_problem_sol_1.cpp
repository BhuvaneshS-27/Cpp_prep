#include<iostream>
#include<string>
//Is a Relationship : Inheritance 
using namespace std;

class author{
    protected:
    int id;
    string name;
    void displayauthor(){
        cout<<"Author's Name :"<<name<<endl;
    }
    public:
    author(int id , string name){           //constructor 
        this->id=id;
        this->name=name;
    }
};

class book: public author{
    public:
    int book_id;
    string book_name;
    void displayBook(){
        cout<<"Book name :"<<book_name<<endl;
        displayauthor();
    }
    book(int book_id , string book_name, int id , string name):author(id,name){
        this->book_id=book_id;
        this->book_name=book_name;
    }

};

int main(){
    book b1(1,"philosopher Stone",1,"JK Rowling");
    b1.displayBook();
}

/*
Is a relationship 
remote , TV remote -> TV Remote is a remote
derived class is a base class 

*/

