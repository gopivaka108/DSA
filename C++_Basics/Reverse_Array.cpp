#include<iostream>
int main () {
    int size;
    std::cout<<"Enter size of Array: ";
    std::cin>>size;
    std::cout<<"Enter "<<size<<" Elements: ";
    int* arr = new int[size];
    for(int i=0; i<size; i++) {
        std::cin>>arr[i];
    }
    return 0;
}