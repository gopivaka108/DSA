#include<iostream>
#include<cmath>
using namespace std;

void Sum_and_Diff(int &a, int &b) {
    int temp = a;
    a = a + b;
    b = abs(temp - b);
}

int main () {
    int x = 2, y = 3;
    Sum_and_Diff(x, y);
    cout << x << " " << y << endl;
    return 0;
}