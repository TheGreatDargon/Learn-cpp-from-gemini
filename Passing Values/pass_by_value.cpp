#include <iostream>
#include <string>

// PASS BY VALUE
// The function gets a COPY. The original variable is safe and unchanged.
void changeValue(int x) {
    x = 100; 
}

int main() {
    int my_num = 5;

    // 1. Try Pass by Value
    changeValue(my_num);
    std::cout << "After changeValue: " << my_num << std::endl; // Still 5

    return 0;
}