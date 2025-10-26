#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int start, int end, int mid){
    vector<int> temp;
    int i = start, j = mid + 1;
    int invCount = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k = 0; k < temp.size(); k++){
        arr[k+start] = temp[k];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = start + (end-start)/2;

        int leftInvCount = mergeSort(arr, start, mid);     // Left half
        int rightInvCount = mergeSort(arr, mid + 1, end);   // Right half

        int invCount = merge(arr, start, end, mid);    // Merge

        return leftInvCount + rightInvCount + invCount;
    }

    return 0;
}

int main(){
    vector<int> arr = {3, 5, 2, 10, 4, 3, 6};

    int ans = mergeSort(arr, 0, arr.size() - 1);
    cout << "Inversion count = " << ans << endl;

    return 0;
}