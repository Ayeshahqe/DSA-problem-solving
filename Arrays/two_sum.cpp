#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;

    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];

        if(mp.find(complement) != mp.end()){    
            return {mp[complement], i};         // To found the required pair
        }

        mp[nums[i]] = i;                        // If no pair found then returns empty
    }

    return {};
}

int main(){
    vector<int> nums = {2, 6, 7, 10, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);
    if(!ans.empty()){
        cout << "Indices = " << ans[0] << " and " << ans[1] << endl;
    }
    else{
        cout << "No pairs found" << endl;
    }

    return 0;
}