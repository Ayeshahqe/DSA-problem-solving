#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

double median(vector<int>& a, vector<int>& b){
    vector<int> merged;

    // Merge both arrays

    merged.insert(merged.end(), a.begin(), a.end());
    merged.insert(merged.end(), b.begin(), b.end());

    // Sort merged array

    sort(merged.begin(), merged.end());

    int n = merged.size();

    if(n % 2 == 0){
        return (merged[n/2 - 1] + merged[n/2]) / 2.0;
    }
    else{
        return merged[n/2];
    }
}

int main(){
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};

    cout << "Median: " << median(arr1, arr2) << endl;
    return 0;
}