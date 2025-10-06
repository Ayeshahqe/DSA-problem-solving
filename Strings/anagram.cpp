// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if(s1.length() != s2.length()){
        cout << "Not anagrams" << endl;
        return 0;
    }

    // Sort both strings

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2){
        cout << "Anagrams" << endl;
    }
    else{
        cout << "Not anagrams" << endl;
    }

    return 0;
}