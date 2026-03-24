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
    int front = 0, rear = size-1;
    int temp;
    while(front < rear) {
        temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;
        front++;
        rear--;
    } 
    for(int i=0; i<size; i++) {
        std::cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}