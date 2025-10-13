#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char use){
    if(n == 1){
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return; 
    }

    towerOfHanoi(n - 1, from, use, to);

    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    towerOfHanoi(n - 1, use, to, from);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "\nSteps to solve tower of hanoi: \n";
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}