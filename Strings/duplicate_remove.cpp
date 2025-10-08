#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, characters = "";
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for(char ch : str){
        if(freq[(int)ch] == 0){
            characters += ch;
            freq[(int)ch] = 1;
        }
    }

    cout << "After removing duplicates: " << characters << endl;

    return 0;
}