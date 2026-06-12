#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

//given the number n , find out and return the digits present in the number
int no_of_digits(int n) 
{
 int count=0;

//Method 1 :
    
    while(n>0)
    {
        n=n/10;
        count++;
    }

//Method 2:
    //count = int(log10(n)+1);

    return count;
}
/*
Write a program to generate the reverse of a given
number N. Print the corresponding reverse number.
Note : If A Number Has Trailing Zeros, Then Its
Reverse Will Not Include Them. For E.G., Reverse Of
10400 Will Be 401 Instead Of 00401.
*/
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check overflow
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;

            // Check underflow
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }

/*
Write a program to determine if given number is palindrome or not. Print true if it is
palindrome, false otherwise.
Palindrome Are The Numbers For Which Reverse Is Exactly Same As The Original
One. For Eg. 121
*/
string check_palindrome(int n)
{
    int last_digit;
    int rev_no=0;
    int dup=n;
    //7789-> 9877
    while(n>0)
    {
        last_digit=n%10;
        rev_no=rev_no*10+last_digit;
        n=n/10;
    }
    return (dup==rev_no)?"Yes":"no";

}

string is_armstrong (int n)
{
    int last_digit;
    int sum=0;
    int dup=n;

    while(n>0)
    {
        last_digit=n%10;
        sum=sum+(last_digit*last_digit*last_digit);
        n/=10;

    }
    return (sum==dup)?"Armstrong":"not Armstrong";
}

void print_all_divisors(int n)
{

//Method 1:
    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0)
    //     cout<<i<<" ";
    // }
    // cout<<endl;

//method 2:

vector <int> ls;
    //O(sqrt(n))
    for (int i=1;i<=sqrt(n);i++)        //alt condition : i*i<=n
    {
        if(n%i==0)
        ls.push_back(i);
        if(n/i!=i)
        ls.push_back(n/i); //to avoid the repetition of 6, 6 in 36
    }
    //for sorting algo : O(n log n) : n-> no of factors
    sort(ls.begin(),ls.end());

    //printing : O(n)
    for (int i : ls)
    {
        cout <<i<<" ";
    }

}

//prime number = a number only divisible by 1 and itself
// (or)
// a number that has a factor of 1 and itself
string check_for_prime(int n)   
{

//Method 1: Brute force O(N)
// int count=0;
// for(int i=1;i<=n;i++)
// {
//     if(n/i==0)
//     count++;
// }
// return (count==2)?"prime":"not prime";

//Method 2 : using factors concept  O(sqrt(N))

int count=0;
for(int i=1;i*i<=n;i++)
{
    if(n%i==0)
    count++;
    if(n/i!=i)
    count++;
}
return (count==2)?"prime":"not prime";

}

int getGCD(int n1,int n2)
{
// //method 1: brute force O(min(n1,n2))
//     int gcd=1;
//     for(int i=1;i<=min(n1,n2);i++)
//     {
//         if(n1%i==0 && n2%i==0)
//         gcd=i;
//     }
//     return gcd;

//method 2 : Using Eucledian algorithm  O(logφ(min(n1,n2))) 
//GCD(N1,N2)=GCD(N1-N2,N2) where N1>N2
//GCD(20,15)=GCD(5,15)  //retain the bigger number
//GCD(5,15)=GCD(10,5)
//GCD(10,5)=GCD(5,5)
//GCD(5,5)=GCD(0,5) //if any number is zero , other is GCD 

//eg 2:
//GCD(52,10)->GCD(42,10)->GCD(32,10)->GCD(22,10)->GCD(12,10)->
//  | instead we do (52%10,10)
//GCD(2,10)->GCD(8,2)->GCD(6,2)->GCD(4,2)->GCD(2,2)->GCD(0,2)->2
while(n1>0 && n2>0)
{
    if(n1>n2)
    n1=n1%n2;
    else
    n2=n2%n1;
}
if(n1==0)
    return n2;
else
    return n1;

}

int main(){
    
    cout<<no_of_digits(67578)<<endl;
    cout<<reverse(1000)<<endl;
    cout<<check_palindrome(121)<<endl;
    cout<<is_armstrong(371)<<endl;
    print_all_divisors(36);
    cout<<endl;
    cout<<check_for_prime(34)<<endl;
    cout<<getGCD(9,12)<<endl;
}
