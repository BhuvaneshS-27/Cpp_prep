#include<iostream>
using namespace std;
int main(){

    int ages[5]={9,14,32,34,55};
    int D2Array[5][5]={
        {9,14,32,34,55},
        {9,14,32,34,55},
        {9,14,32,34,55},
        {9,14,32,34,55},        
        {9,14,32,34,55}};

        D2Array[2][3]=999;          //indexing matrix 
        cout<<"accessing individual element:"<<endl;
        cout<<D2Array[2][3]<<endl;

        cout<<"rows and cols dimension :"<<endl;
        int row = sizeof(D2Array)/sizeof(D2Array[0]);
        cout<<row<<endl;

        int col = sizeof(D2Array[0])/sizeof(D2Array[0][0]);
        cout<<col<<endl;

        cout<<"Printing Entire array :"<<endl;
        for(int i=0; i<row; i++)
        {
            for (int j=0; j<col;j++)
            {
                cout<<D2Array[i][j]<<" ";
            }
            cout<<endl;
        }
}