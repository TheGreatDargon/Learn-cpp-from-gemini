#include <iostream>
#include <string>

// PASS BY REFERENCE
// The function gets an ALIAS. The '&' means 'x' IS the original variable.
void changeReference(int &x) {
    x = 100;
}

int main() {

	int my_num = 5;
	// 2. Try Pass by Reference
    changeReference(my_num);
    std::cout << "After changeReference: " << my_num << std::endl; // Now 100

	return 0;
}