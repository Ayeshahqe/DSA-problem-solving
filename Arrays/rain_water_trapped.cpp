#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height){
    int n = height.size();
    if(n == 0) return 0;

    int left = 0, right = n - 1, water = 0;
    int leftMax = 0, rightMax = 0;

    while(left < right){
        if(height[left] < height[right]){
            if(height[left] >= leftMax){
                leftMax = height[left];
            }
            else {
                water += leftMax - height[left];
            }

            left++;
        }
        else{
            if(height[right] >= rightMax){
                rightMax = height[right];
            }
            else{
                water += rightMax - height[right];
            }

            right--;
        }
    }

    return water;
}

int main(){
    vector<int> height = {3, 1, 0, 2, 5};
    cout << "Trapped rain water = " << trap(height) << endl;
    return 0;
}