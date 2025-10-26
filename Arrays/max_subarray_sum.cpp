#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarray(vector<int>& nums){
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < nums.size(); i++){
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }

    return maxSum;
}

int main(){
    vector<int> nums = {-2, -11, -3, 4, 7, -1, 2, 1, -7, 4};
    cout << "Maximum subarray sum = " << maxSubarray(nums) << endl;
    return 0;
}