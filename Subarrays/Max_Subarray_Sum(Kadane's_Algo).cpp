/*  Problem: The task is to find the subarray with maximum sum from the given array.(MAXIMUM SUM SUBARRAY PROBLEM)
    Approach: There are different solutions to this problem like using brute force method or cumulative sum approach 
    but there time complexity is O(n^3) and O(n^2) respectively.
    So the very Optimized solution to this problem is given by Kadane's Algorithm with complexity -> O(n).

    Solution:

    So in this solution we are using one variable currSum that stores the sum till the present element of the array.
    e.g. 
          array:    1   2   4   -8   9   2
        currSum:    1   3   7   -1   8   10
    Now, if the value of this variable currSum comes out to be negative at any place then reinitialized it by 0(zero).
    so now it becomes:
          array:    1   2   4   -8   9   2
        currSum:    1   3   7    0   9   11
    Now we have another variable maxSum as the name suggests that will store the maximum sum i.e our answer.
    so for this example at the end maxSum will be 11.

    So now let's code this:
*/
#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int currSum = 0, maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum = currSum + a[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout<<"Maximum subarray sum is : "<<maxSum;
    return 0;
}

//author: Gurcharan Kohli
