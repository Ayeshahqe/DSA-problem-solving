#include <iostream>
#include <unordered_set>
using namespace std;

// Function for finding length of the longest substring with unique characters

int longestSubstr(string s){
    unordered_set<char> seen;
    int i = 0, j, maxLen = 0;

    for(j = 0; j < s.size(); j++){
        while(seen.find(s[j]) != seen.end()){
            seen.erase(s[i]);
            i++;
        }
        seen.insert(s[j]);
        maxLen = max(maxLen, j - i + 1);
    }

    return maxLen;
}

int main(){
    string s = "abcabcbba";
    cout << "Longest substring length = " << longestSubstr(s) << endl;
    return 0;
}