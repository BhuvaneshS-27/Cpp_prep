#include<iostream>
#include<string>
//Has a relationship : Composition
using namespace std;

class Author{
    protected:
    int id;
    string name;
    public:
    void displayauthor(){
        cout<<"Author's Name :"<<name<<endl;
    }
    Author(int id , string name){           //constructor 
        this->id=id;
        this->name=name;
    }
};

class Book{
    public:
    int book_id;
    string book_name;
    Author *author;
    void displayBook()
    {
        cout<<"Book name :"<<book_name<<endl;
        (*author).displayauthor();
    }
    Book(int book_id , string book_name,Author *author){
        this->book_id=book_id;
        this->book_name=book_name;
        this->author=author;
    }

};

int main(){
    Author a1(1,"JK Rowling");
    Book b1(1,"philosopher Stone",&a1);
    b1.displayBook();

    Book b2(2,"Chamber of Secrets",&a1);
    b2.displayBook();
}

/*
Has a relationship:
Book has a author -✅ Correct relationship

*/
