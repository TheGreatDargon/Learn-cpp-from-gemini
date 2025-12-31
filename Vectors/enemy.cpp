#include <iostream>
#include <string>
#include <vector>

class Enemy {
private:
	std::string name;
	int health;
public:
	Enemy(const std::string &n, int h) : name(n), health(h) {}
	std::string get_name() const { return name; }
	void take_damage(int amount) {
		health -= amount;
		if (health < 0) { health = 0; }
		std::cout << name << " took " << amount << " damage! HP is now " << health << "\n";
	}
	int get_health() const { return health; }
};

int main () {

	std::vector<Enemy> wave;

	wave.emplace_back("Goblin", 20);
	wave.emplace_back("Orc", 60);
	wave.emplace_back("Troll", 100);

	// Combat Loop
	for (auto &e : wave) {
		std::cout << "A wild " << e.get_name() << " has appeared!\n";
		while (e.get_health() > 0) {
			e.take_damage(20);
		}
	}


	return 0;
}