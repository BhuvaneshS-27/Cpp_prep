//check if a given string is palindrome , using functional recursion 

#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(int i , string s)
{
    if(i>=s.size()/2)
    return 1;
    if(s[i]!=s[s.size()-i-1])
    return 0;
    return checkpalindrome(i+1,s);
}

bool isPalindrome(string s)
{
    string t;
    for(char c:s)
    {
        if(isalnum(c))
        {
            t+=tolower(c);
        }
    }
    cout<<t<<endl;

        return checkpalindrome(0,t);
}


int main(){
    string str="MADAM";
    cout<<isPalindrome(str);

}