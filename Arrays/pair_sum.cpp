#include <iostream>
#include <unordered_set>
using namespace std;

void pairSum(int arr[], int n, int target){
    unordered_set<int> seen;                                        // To store elements we have visited.
    bool found = false;

    cout << "Pairs with sum " << target << " are: \n";

    for(int i = 0; i < n; i++){
        int complement = target - arr[i];

        if(seen.find(complement) != seen.end()){                    // Checks if complement is already in the set.
            cout << "(" << arr[i] << ", " << complement << ")\n";
            found = true;
        }

        seen.insert(arr[i]);
    }

    if(!found) cout << "No pairs found.\n";
}

int main(){
    int arr[] = {2, 7, 4, 5, -5, 11, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter target: ";
    cin >> target;

    pairSum(arr, n, target);
    return 0;
}