#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void permute(string str, int l, int r){
    if(l == r){                                 // Base case
        cout << str << endl;
        return;
    }

    for(int i = l; i <= r; i++){
        swap(str[l], str[i]);                   // Choose one character at index i to fix at position l.
        permute(str, l + 1, r);                 // Recursively permute the remaining substring.
        swap(str[l], str[i]);                   // Backtrack
    }
}    

int main(){
    string s = "ABC";
    cout << "All permutations of " << s << ":\n";
    permute(s, 0, s.size() - 1);
    return 0; 
}