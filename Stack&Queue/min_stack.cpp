#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<long long int> s;
    long long int minVal;

    void push(int val){
        if(s.empty()) {
            s.push(val);
            minVal = val;
        } else {
            if(val < minVal){
                s.push((long long)2 * val - minVal);
                minVal = val;
            } else {
                s.push(val);
            }
        }
    }

    void pop(){
        if(s.empty()) return;

        if(s.top() < minVal) {
            minVal = 2*minVal - s.top();
        }

        s.pop();
    }

    int top(){
        if(s.top() < minVal){
            return minVal;
        }
        return s.top();
    }

    int getMin(){
        return minVal;
    }
};

int main(){
    MinStack st;

    st.push(3);
    st.push(2);
    cout << "Min: " << st.getMin() << endl;
    st.push(5);
    st.push(1);
    cout << "Min: " << st.getMin() << endl;
    st.pop();
    cout << "Min: " << st.getMin() << endl;

    return 0;
}