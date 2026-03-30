#include<iostream>
#include<string>

bool Palindrome_Check(const std::string& str) {
    int front = 0, rear = str.size() - 1;
    while(front < rear) {
        if(str[front] != str[rear]) {
            return false;
        }
        front++;
        rear--;
    }
    return true;
}

int main () {
    return 0;
}