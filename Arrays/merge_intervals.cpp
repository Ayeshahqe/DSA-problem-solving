#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> merged;
    if(intervals.empty()) return merged;

    sort(intervals.begin(), intervals.end());       // Sort by start time

    merged.push_back(intervals[0]);

    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i][0] <= merged.back()[1]){
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
        else{
            merged.push_back(intervals[i]);
        }
    }

    return merged;
}

int main(){
    vector<vector<int>> intervals = {{1, 4}, {3, 5}, {6, 10}, {7, 10}};
    vector<vector<int>> result = merge(intervals);

    cout << "Merged intervals = \n";
    for(auto& it : result){
        cout << "[" << it[0] << "," << it[1] << "] ";
    }
    
    cout << endl;
    return 0;
}