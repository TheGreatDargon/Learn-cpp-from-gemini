#include <iostream>

void swap_values(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int x = 10;
	int y = 20;

	swap_values(x, y);

	std::cout << "x is now: " << x << " y is now: " << y << std::endl;

	return 0;
}