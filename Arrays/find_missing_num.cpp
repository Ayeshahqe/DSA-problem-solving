#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << "elements (one missing): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;              // Sum of nummbers from 1 to n + 1

    for(int i = 0; i < n; i++){
        total -= arr[i];
    }

    cout << "Missing number is: " << total << endl;

    return 0;
}

// Time complexity = O(n)
