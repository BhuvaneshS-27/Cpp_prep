
/*
4 Rules to solve any pattern :
1)for the outer loop , count the no of lines    (outer loop =lines)
2)for the inner loop , focus on the column and connect them somehow to the rows (inner loop= columns)
3)whatever printing, do it inside the inner for loop
4)observe symmetry (optional step)

*/

#include<iostream>
using namespace std;

void print1(int n){

//pattern 1:

/*
*****
*****
*****
*****
*****
*/

for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<"* ";
    }
    cout<<endl;

}
}

void print2(int n)
{
/*

*
**
***
****
*****

*/

for(int i=0;i<n;i++)
{
    for(int j=0;j<i+1;j++)              //ith row    no of stars
    {                                   //0        --> 1
        cout<<"* ";                     //1        --> 2
    }                                   //2        --> 3
    cout<<endl;
}
}

void print3(int n){
/*
pattern:

1
12
123
1234
12345

*/
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }

}

void print4(int n)
{

/*
pattern:
1
22
333
4444
55555

*/

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;
}
}

void print5(int n){


/*
pattern:
                        
*****                   
****                    
***                     
**                      
*                       

ith row       no of stars
1             -->5        j<=(n-row+1)
2             -->4
3             -->3
4             -->2
5             -->1
*/

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=(n-i+1);j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
}

void print6(int n){
/*
pattern

12345
1234
123
12
1

ith row       no of stars
1             -->5        j<=(n-row+1)
2             -->4
3             -->3
4             -->2
5             -->1
*/

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=(n-i+1);j++)
    {
        cout<<j;
    }
    cout<<endl;
}
}

void print7(int n)
{
    /*
    pattern 
t   t   t   t   *
t   t   t   *   *   *
t   t   *   *   *   *   *
t   *   *   *   *   *   *   * 
*   *   *   *   *   *   *   *   *
    ith row       no of spaces          no of stars
1             -->4        (n-rows)         1         (2*rows-1) (odd numbers)
2             -->3                         3
3             -->2                         5
4             -->1                         7
5             -->0                         9

    */

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
}

void print8(int n)
{
    /*
        pattern 
*   *   *   *   *   *   *   *   *  
t   *   *   *   *   *   *   *   
t   t   *   *   *   *   *  
t   t   t   *   *   *  
t   t   t   t   *

    ith row       no of spaces          no of stars
1             -->0   (row-1)               9        (2*(n-rows+1)-1)
2             -->1                         7
3             -->2                         5
4             -->3                         3
5             -->4                         1         (2*rows-1) (odd numbers)

    */
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i-1;j++)
    {
        cout<<" ";
    }

    for(int k=1;k<=(2*(n-i+1)-1);k++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}

void print9(int n)
{
    print7(n);
    print8(n);
}

void print10(int n)
{

/*
pattern for n=5

*           rows = (2*n-1)
**
***
****
*****
****    6-->4       i+(no of stars) = 2n 
***     7-->3       (no of stars) = 2n-i
**      8-->2
*       9-->1

*/

for(int i=1;i<=(2*n-1);i++)
{
    if(i<=5)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";     //first 5 rows 
        }
    }
    else
    {
        for(int k=1;k<=(2*n-i);k++)
        {
            cout<<"* ";
        }
    }
    cout<<endl;
    
}

}

void print11(int n)
{

/*
pattern :
1
01
101
0101
10101

*/

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if((i+j)%2==0)
        cout<<"1 ";
        else
        cout<<"0 ";
    }
    cout<<endl;
}
}

void print12(int n)
{
/*
pattern (for n=5)   //spaces
1             1     6
1 2         2 1     4
1 2 3     3 2 1     2
1 2 3 4 4 3 2 1     0

*/

for(int i=1;i<n;i++)    
{
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int k=1;k<=(n+1-2*i+2);k++)
    {
        cout<<" ";
    }
    for(int j=i;j>0;j--)
    {
        cout<<j;
    }
    cout<<endl;
}
}

void print13(int n)
{
    /*
    pattern :(for n=3)
    1
    23
    456

    */
    int k=1;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<"\t";
            k++;
        }
        cout<<endl;
    }
}

void print14(int n)
{
    /*
    pattern:

    A
    AB
    ABC
    ABCD
    ABCDE
    */
    
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<char(64+j)<<"\t";
            
        }
        cout<<endl;
    }

}

void print15(int n)
{
    /*
    pattern :

    ABCDE
    ABCD
    ABC
    AB
    A

    */

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}

void print16(int n)
{
    /*
    pattern :
A
BB
CCC
DDDD
EEEEE

    */
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<char(64+i);
    }
    cout<<endl;
}
}

void print17(int n)
{
    /*

pattern :

   A
  ABA
 ABCBA
ABCDCBA
    
    */
int j=1;
for(int i=1;i<=n;i++)
{
    for(int k=1;k<=(n-i+1);k++)
    {
        cout<<" ";
    }

    for( j=1;j<=i;j++)
    {
        cout<<char(64+j);
    }
    j--;
    j--;
    for(;j>0;j--)
    {
        cout<<char(64+j);
    }
    cout<<endl;
}
}

void print18(int n)
{
/*
pattern :
E
DE
CDE
BCDE
ABCDE

*/

    for(int i=5;i>0;i--)
    {
     for(int j=i;j<=n;j++)
     {
        cout<<char(64+j);
     }
        cout<<endl;
    }
    
}

void print19(int n)
{
    /*
    pattern:(for n=5)
*   *   *   *   *   *   *   *   *   *   

*   *   *   *           *   *   *   *

*   *   *                   *   *   *

*   *                           *   *

*                                   *

*                                   *

*   *                           *   *

*   *   *                   *   *   *

*   *   *   *           *   *   *   *

*   *   *   *   *   *   *   *   *   *

Rows            Spaces: 2*(i-1)
1               0
2               2
3               4
4               6
5               8
6               8       rows+spaces/2=2*n
7               6           spaces=2*(2*n-rows)
8               4
9               2
10              0
    
    */


for(int i=1;i<=2*n;i++)
{
    if(i<=5)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* ";
        }

    }
    else
    {
        for(int k=1;k<=i-n;k++)
        {
            cout<<"* ";
        }
    }

    //spaces
    if(i<=5)
    {
        for(int l=1;l<=(2*(i-1));l++)
        {
            cout<<"  ";
        }
    }
    else
    {
        for(int d=1;d<=(2*(2*n-i));d++)
        {
            cout<<"  ";
        }
    }
    


    //printers
    if(i<=5)
    {
        for(int m=1;m<=n-i+1;m++)
        {
            cout<<"* ";
        }

    }
    else
    {
        for(int p=1;p<=i-n;p++)
        {
            cout<<"* ";
        }
    }

    cout<<endl;
}
}

void print20(int n)
{
    /*
    pattern:
    *                                   *
    *   *                           *   *
    *   *   *                   *   *   *
    *   *   *   *           *   *   *   *
    *   *   *   *   *   *   *   *   *   *
    *   *   *   *           *   *   *   *
    *   *   *                   *   *   *
    *   *                           *   *
    *                                   *

    rows            space
    1               8       2*rows+space=2*n
    2               6              space=2(n-rows)
    3               4
    4               2
    5               0
    6               2       (rows-n)*2=space
    7               4
    8               6
    9               8
    */

    for(int i=1;i<=(2*n-1);i++)
    {
        if (i<=5)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }

        }
        else{
            for(int j=1;j<=(2*n-i);j++)
            {
                cout<<"* ";
            }
        }
        //spaces

        if (i<=5)
        {
            for(int j=1;j<=2*(n-i);j++)
            {
                cout<<"  ";
            }

        }
        else{
            for(int j=1;j<=(i-n)*2;j++)
            {
                cout<<"  ";
            }
        }

        if (i<=5)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }

        }
        else{
            for(int j=1;j<=(2*n-i);j++)
            {
                cout<<"* ";
            }
        }
        cout<<endl;

    }
}

void print21(int n)
{

    /*
    pattern:(for n = 6)
    ******
    *    *
    *    *
    *    *
    *    *
    ******   
 
    */

    for(int i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(j==1||j==n)
                cout<<"* ";
                else
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}

void print22(int n)
{
    /*
    pattern:(for n=4)       rows    section I             section II:excess(maintain same value)
   5 5 5 5 5 5 5 5 5        1       1                     8   2*(n-rows)
   5 4 4 4 4 4 4 4 5        2       2                     6           
   5 4 3 3 3 3 3 4 5        3       3                     4
   5 4 3 2 2 2 3 4 5        4       4                     2
   5 4 3 2 1 2 3 4 5        5       5     rows+secI=2*n   0
   5 4 3 2 2 2 3 4 5        6       4     secI=2*n-rows   2     (rows-n)*2
   5 4 3 3 3 3 3 4 5        7       3                     4
   5 4 4 4 4 4 4 4 5        8       2                     6
   5 5 5 5 5 5 5 5 5        9       1                     8
    n   no of rows(2*n-1)
    1   1
    2   3
    3   5
    4   7

    dividing into 4 sections :

    */
int k,m;    //to be continued values
    for(int i=1;i<=(2*n-1);i++)
    {
        if(i<=n)    //upper half
        {
            for(int j=1;j<=i;j++)
            {
                cout<<n-j+1;
                k=n-j+1;    //taking the same value
            }
            for(int l=1;l<=(2*(n-i));l++)
            {
                cout<<k;
            }
            while(k<n)
            {   k++;
                cout<<k;
            }
        }
        else    //lower half
        {
            for(int k=1;k<=(2*n-i);k++)
            {
                cout<<n-k+1;
                m=n-k+1;    //store last value
            }
            for(int p=1;p<=(i-n)*2;p++)
            {
                cout<<m;
            }
            while(m<n)
            {   m++;
                cout<<m;
            }

        }
        
        cout<<endl;
    }
}

int main()
{ int n;
cout<<"Enter n:";
cin>>n;
print22(n);
}
