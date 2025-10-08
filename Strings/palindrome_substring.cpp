#include <iostream>
#include <string>
using namespace std;

// Expand from center & return palindrome length

int expandFromCenter(const string &str, int left, int right){
    while(left >= 0 && right < str.size() && str[left] == str[right]){
        left--;
        right++;
    }
    return right - left - 1;
}

string longestPalindrome(string str){
    if(str.empty()){
        return "";
    }

    int start = 0, end = 0;

    for(int i = 0; i < str.size(); i++){
        int len1 = expandFromCenter(str, i, i);         // For odd length palindrome
        int len2 = expandFromCenter(str, i, i + 1);     // For even length palindrome
        int len = max(len1, len2);

        if(len > end - start){
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }

    return str.substr(start, end - start + 1);
}

int main(){
    string str = "cabaed";
    cout << "Longest palindrome substring: " << longestPalindrome(str) << endl;
    return 0;
}

// Time complexity = O(n^2)
// Space complexity = O(1)