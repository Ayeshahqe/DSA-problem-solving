#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the longest common prefix

string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()){
        return "";
    }

    sort(strs.begin(), strs.end());                     // This is to sort words lexicographically.

    // Compare first and last string

    string first = strs[0];
    string last = strs.back();
    string prefix = "";                                 // Initializing an empty string to buid and store the common prefix

    for(int i = 0; i < first.size(); i++){
        if(first[i] == last[i]){
            prefix += first[i];
        }
        else{
            break;
        }
    }

    return prefix;
}

int main(){
    vector<string> words = {"cat", "catch", "cation", "catfish"};
    cout << "Longest common prefix: " << longestCommonPrefix(words) << endl;
    return 0;
}