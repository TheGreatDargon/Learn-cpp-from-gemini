class Player {
private:
    int health; // Nobody can change this directly

public:
    // This is a Constructor
    Player(int h) { health = h; }

    // This is a Member Function (Method)
    void take_damage(int amount) {
        health -= amount;
    }
};