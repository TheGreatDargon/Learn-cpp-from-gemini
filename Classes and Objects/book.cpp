#include <iostream>
#include <string>

class Book {
private:
	std::string title;
	int pages;
public:
	Book(const std::string &t, int p) : title(t), pages(p) {}

	void display_info() const {
		std::cout << "Title: " << title << ", Pages: " << pages << std::endl;
	}
};

int main() {
	Book my_book("The Great Gatsby", 180);
	my_book.display_info();

	return 0;
}
