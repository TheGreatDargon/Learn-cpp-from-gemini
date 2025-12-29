#include <iostream>

int main() {
	std::cout << "Please enter your favorite number: ";
	int favorite_number;
	std::cin >> favorite_number;
	std::cout << "Now please enter your favorite letter: ";
	std::string favorite_letter;
	std::cin >> favorite_letter;

	int next_number = favorite_number + 1;

	std::cout << "Your favorite letter is " << favorite_letter << " and your lucky number is: " << next_number << std::endl;

	return 0;
}