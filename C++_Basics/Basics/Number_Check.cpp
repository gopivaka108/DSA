#include<iostream>

int main () {
    int n;
    std::cout<<"Enter n: ";
    std::cin>>n;

    if(n==0) {
        std::cout<<"Zero";
    }
    else if(n>0) {
        if(n%2==0) {
            std::cout<<"Positive Even";
        }
        else {
            std::cout<<"Positive Odd";
        }
    }
    else {
        std::cout<<"Negative";
    }
}