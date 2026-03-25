#include<iostream>
#include<cmath>
using namespace std;

void Sum_and_Diff(int &a, int &b) {
    int temp = a;
    a = a + b;
    b = abs(temp - b);
}

int main () {
    return 0;
}