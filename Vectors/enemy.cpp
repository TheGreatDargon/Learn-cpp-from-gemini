#include <iostream>
#include <string>
#include <vector>

class Enemy {
private:
	std::string name;
public:
	Enemy(const std::string &n) : name(n) {}
	std::string get_name() const { return name; }
};

int main () {

	std::vector<Enemy> wave;

	wave.emplace_back("Goblin");
	wave.emplace_back("Orc");
	wave.emplace_back("Troll");

	for (const auto &e : wave) {
		std::cout << "A wild " << e.get_name() << " has appeared!\n";
	}


	return 0;
}