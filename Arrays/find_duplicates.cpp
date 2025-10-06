#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elemets: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Duplicate elemets are: ";
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout  << endl;
    return 0;
}