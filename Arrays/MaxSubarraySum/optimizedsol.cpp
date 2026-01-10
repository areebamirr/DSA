#include <iostream>
using namespace std;

// This code is better optimized to print max sum of subarray.
// Time complexity is O(n^2)
void maxSubarraySum(int *arr, int n){
    int maxSum = arr[0];
    for (int start=0; start<n; start++){
        int currSum = 0;
        for (int end = start; end<n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Maximum subarray sum = " << maxSum << endl;
}

int main(){

    int arr[6] = {3,2,1,6,4,3};
    int n = 6;
    maxSubarraySum(arr, n);
    

    return 0;
}