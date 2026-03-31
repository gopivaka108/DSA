#include<iostream>

int DigitSum(int n) {
    int sum = 0;
    while(n>0) {
        int lastDigit = n%10;
        sum+=lastDigit;
        n = n/10;
    }
    return sum;
}

int main () {
    int n;
    std::cout<<"Enter any +ve Integer: ";
    std::cin>>n;
    std::cout<<DigitSum(n);
    return 0;
}
