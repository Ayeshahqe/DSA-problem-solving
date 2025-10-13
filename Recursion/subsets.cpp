#include <iostream>
#include <vector>
using namespace std;

void subsets(vector<int> arr, vector<int> current, int index){
    if(index == arr.size()){
        cout << "{ ";
        for(int x : current) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    current.push_back(arr[index]);
    subsets(arr, current, index + 1);

    current.pop_back();
    subsets(arr, current, index + 1);
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> current;

    cout << "All subsets: \n";
    subsets(arr, current, 0);
    return 0;
}