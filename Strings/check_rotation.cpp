#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    string temp = s1 + s1;                  

    return temp.find(s2) != string::npos;
}

int main(){
    string s1 = "abcd", s2 = "cdab";

    if(isRotation(s1, s2)){
        cout << "Rotation" << endl;
    }
    else{
        cout << "Not rotation" << endl;
    }
    return 0;
}