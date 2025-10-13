#include <iostream>
#include <vector>
using namespace std;

int fibo(int n, vector<int> dp){
    if(n <= 1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }
    
    return fibo(n - 1, dp) + fibo(n - 2, dp);
}

int main(){
    int n = 7;
    vector<int> dp(n + 1, -1);

    cout << "Nth fibonacci number: " << fibo(n, dp) << endl;
    return 0;
}