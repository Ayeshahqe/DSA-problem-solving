#include <iostream>
using namespace std;

int main(){
    int n1 = 4, n2 = 6;
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6, 7, 8};

    cout << "Intersection elements: ";
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}