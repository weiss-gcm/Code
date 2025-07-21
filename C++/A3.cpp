#include <iostream>
using namespace std;

int varG = 10;
int main() {
    int varL = 20;
    auto varA = 30;

    cout << "Global variable varG: " << varG << endl;
    cout << "Local variable varL: " << varL << endl;
    cout << "Auto variable varA: " << varA << endl;

    return 0;
}
