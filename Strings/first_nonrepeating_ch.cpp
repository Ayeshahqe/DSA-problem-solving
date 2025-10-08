#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for(char ch : str){
        freq[(int)ch]++;
    }
    
    for(char ch : str){
        if(freq[(int)ch] == 1){
            cout << "First non-repeating character: " << ch << endl;
            return 0;
        }
    }

    cout << "No non-repeating character" << endl;
    return 0;
}