#include <iostream>
using namespace std;

int main(){
    int n, sum, i;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elemets: ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> sum;

    int start = 0, curr_sum = 0;

    for(i = 0; i < n; i++){
        curr_sum += arr[i];

        while(curr_sum > sum && start < i){
            curr_sum -= arr[start];
            start++;
        }

        if(curr_sum == sum){
            cout << "Subarray found from index " << start << " to " << i << endl;
            return 0;
        }
    }
    
    cout << "No subarray found" << endl;
    return 0;
}