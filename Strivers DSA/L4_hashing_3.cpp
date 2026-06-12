//NUMBER HASHING USING MAPS
#include<bits/stdc++.h>
using namespace std;

//A map stores all values in sorted order
int main(){

    //define an input array
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"\n Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //creating a hash using map
    map <int,int> mpp; //<number , frequency>
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    //fetch
    int query;
    while(1)
    {
        cout<<"enter number to be searched :";
        cin>>query;
        if(query==-1)
        break;
        cout<<"\n This number occured :"<<mpp[query]<<endl;
    }

}
/*
1) TIME COMPLEXITY of map (both storing and fetching ):O(log N) {worst , average , best}
2)TIME COMPLEXITY of unordered_map (both storing and fetching ):O(1) {average , best}
                                                             : O(N) {worst}

3) a map can have any datastructure as key, but unordered_map it is limited to (int ,char, bool , float , string)


*/



//CHATGPT

/*
HASHING USING DIVISION METHOD (unordered_map)

1. HASH FUNCTION
The division method computes the bucket index as:

    h(key) = key % m

where:
    key = value to be stored
    m   = number of buckets in the hash table

Example:
    key = 27
    m = 10

    h(27) = 27 % 10 = 7

So 27 is placed in bucket 7.

--------------------------------------------------

2. HOW unordered_map WORKS

unordered_map internally uses a hash table.

Steps:

1. Compute hash value of the key.
2. Convert hash value into a bucket index.
3. Store the key-value pair in that bucket.
4. During search, compute the same bucket index and look only in that bucket.

Example:

Keys: 15, 25, 35
Buckets = 10

15 % 10 = 5
25 % 10 = 5
35 % 10 = 5

All three keys go to bucket 5.

This situation is called a COLLISION.

--------------------------------------------------

3. COLLISION HANDLING (SEPARATE CHAINING)

Most implementations of unordered_map use separate chaining.

Bucket 5:

    15 -> 25 -> 35

Each bucket stores a list of elements.

When searching for 25:
    Go directly to bucket 5
    Traverse the list
    Find 25

--------------------------------------------------

4. WHY AVERAGE CASE IS O(1)

For a good hash function:

    Elements are distributed uniformly.

Example:

1000 elements
1000 buckets

Average elements per bucket ≈ 1

Search process:

    Compute hash      -> O(1)
    Go to bucket      -> O(1)
    Check few items   -> O(1)

Total:

    O(1)

Insertion and deletion follow the same logic.

--------------------------------------------------

5. BEST CASE O(1)

Best case:

    No collisions occur.

Example:

10 -> bucket 0
21 -> bucket 1
32 -> bucket 2

Each bucket contains exactly one element.

Search:
    Compute bucket index
    Access element immediately

Time Complexity:

    O(1)

--------------------------------------------------

6. WHY WORST CASE IS O(n)

Worst case:

    All keys collide into the same bucket.

Example:

15, 25, 35, 45, 55

All map to bucket 5.

Bucket 5:

    15 -> 25 -> 35 -> 45 -> 55

To find 55:

    Compare with 15
    Compare with 25
    Compare with 35
    Compare with 45
    Compare with 55

Need to scan all elements.

Time Complexity:

    O(n)

--------------------------------------------------

7. COMPLEXITIES OF unordered_map

Operation      Best Case   Average Case   Worst Case
----------------------------------------------------
Search            O(1)         O(1)          O(n)
Insert            O(1)         O(1)          O(n)
Delete            O(1)         O(1)          O(n)

--------------------------------------------------

INTERVIEW ONE-LINER

unordered_map uses hashing. The division method maps a key to a bucket using
h(key) = key % m. Average and best-case operations are O(1) because the hash
function distributes keys uniformly across buckets, requiring only direct bucket
access. Worst-case complexity becomes O(n) when many keys collide into the same
bucket, forcing a linear scan of that bucket's chain.
*/