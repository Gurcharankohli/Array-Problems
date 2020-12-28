/*
    Problem:Longest Arithmetic Subarray
    Arithmetic Array(AA): Arithmetic Array is an array that contains at least two integers and difference
                          between consecutive integers are equal.
                          e.g. [9,10], [3,3,3], [9,7,5,3] are AAs while [1,3,3,7], [2,1,2], [1,2,4] are
                          not AAs.
    Problem Statement: Choose a contiguous Arithmetic Subarray from array, that has maximum length.

    Sample Test Case:
                 arr:   10  7   4   6   8   10  11
                diff:     -3  -3  2   2   2    1
    so the output of above case is 4 i.e [4,6,8,10]
    Approach:
    * Loop over the array and find ans.
    * Maintains following variable:-
       1) Previous common difference(pd).
       2) Current Arithmetic Subarray length (Curr).
       3) Maximum Arithmetic subarray length (ans).
    So total we have 2 cases, that are :
    case 1:
            pd == a[i]-a[i-1] i.e if prev common diff. is equal to present difference.
                * curr , ans inc by 1
                * ans = max(ans, curr)
    case 2: 
            pd != a[i]-a[i-1] i.e. if prev common diff. is not equal to present difference.
                * Update ans , curr to 2
                

    ok so now code this...


*/
#include<iostream>
using namespace std;
int main()
{
    int n;                                          //array size
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];                                  //array input
    }
    int ans=2,curr=2;                               // At least array contains 2 elements so curr(current length) is initialized to 2
    int pd = a[1]-a[0];
    int i=2;
    while(i<n){
        if(pd == a[i]-a[i-1]){
            curr++;
        }
        else {
            pd = a[i]-a[i-1];
            curr = 2;                                // So in case of not equal curr again becomes 2 
        }
        ans = max(ans, curr);                        // Assigns ans the maximum of ans and curr so that it contains the maximum value of length
        i++;
    }
    cout<<"Maximum length  : "<<ans;
}

//author: Gurcharan Kohli
