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
    std::string str;
    std::cout << "Enter string: ";
    std::cin >> str;
    std::cout << (Palindrome_Check(str) ? "Yes" : "No") << std::endl;
    return 0;
}