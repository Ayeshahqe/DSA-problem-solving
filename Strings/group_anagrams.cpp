#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

void groupAnagrams(vector<string>& words){
    unordered_map<string, vector<string>> data;

    for(string w : words){
        string sorted = w;
        sort(sorted.begin(), sorted.end());
        data[sorted].push_back(w);
    }

    cout << "Group Anagrams: \n";
    for(auto pair: data){
        cout << "[ ";
        for(string w : pair.second){
            cout << " ";
        }
        cout << "]\n";
    }
}

int main(){
    vector<string> words = {"eat", "sleep", "work", "tea", "ate", "listen", "silent"};
    groupAnagrams(words);
    return 0;
}
