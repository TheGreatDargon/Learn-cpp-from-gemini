#include <iostream>
#include <string>

class Level {
private:
	std::string level_name;
public:
	Level(const std::string &l) : level_name(l) 
	{
		std::cout << "Loading Assets for " << level_name << ".\n";
	}
	~Level() {
		std::cout << "Cleaning up assests for: " << level_name << ".\nLevel Unloaded.\n";
	}
};

int main () {

	std::cout << "Game Started.\n";

	{
		Level current_level("Dungeon");
	}

	std::cout << "Returning to Main Menu." << std::endl;

	return 0;
}