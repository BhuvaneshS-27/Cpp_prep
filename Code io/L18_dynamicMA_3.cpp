#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the no of students :";
    cin>>num;

    int *arrayptr = new int[num];    //declaring an array pointer
                    //  ^^^---  "an array of int, of size num"
//The [] belongs with the type description, so it sits after int.
    cout<<"enter marks of "<<num<<" students :";
    for( int i =0 ; i<num ; i++)
    {
        cin >>arrayptr[i];  //arr[i] is just syntactic sugar for *(arr + i)
    }                       //The dereference is already happening inside the [] operator 

    cout<<"\n printng final marks :"<<endl;
    for(int i = 0 ; i< num ; i++)
    {
        cout<<arrayptr[i]<<" ";
    }

    delete[] arrayptr;
// ^^--- "use the array-version of delete"
//It's not describing the type anymore — it's changing how delete behaves.
// So it sits right after delete, before the pointer.
}