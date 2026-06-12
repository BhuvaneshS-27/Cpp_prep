//CHARACTER HASHING

#include<bits/stdc++.h>
using namespace std;

int main(){

    //Setting a string
    string str ="sjvnnfwjbwifwnhvwbuihvwb";
    
    //creating a hash 
    int size=26;
    int hash[size]={0};

    for(int i=0;i<str.size();i++)
    {
        hash[str[i]-'a']++;
    }

    //fetch 
    char query;
    while(1)
    {
        cout<<"\n Enter the element to be counted:";
        cin>>query;
        if(query=='0')
        return 0;
        cout<<query<<" Occured "<<hash[query-'a']<<" Times"<<endl;
    }
}