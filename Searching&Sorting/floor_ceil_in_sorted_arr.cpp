#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 6, 10, 20, 25};
    int n = 7, x = 7;

    int floor = -1, ceil = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] <= x){
            floor = arr[i];
        }

        if(arr[i] >= x && ceil == -1){
            ceil = arr[i];
            break;
        }
    }

    cout << "Floor: " << floor << ", Ceil: " << ceil << endl;
    return 0;
}