#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum<0){
            currSum = 0;
        }
    }
    cout << "Maximum subarray sum = " << maxSum << endl;
}

int main(){
    // Using Kadane's Algorithm to find the max sum of subarray of the array.
    // Kadane's Algorithm is part of Dynamic Programming.
    // Using Kadane's Algorithm, Time complexity to print max sum of subarray become O(n) which means there is only one loop block.

    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr, n);
    return 0;
}