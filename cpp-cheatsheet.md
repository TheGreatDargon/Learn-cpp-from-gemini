# C++ Cheat Sheet

## 1. Namespaces (std::)
Namespaces group code to prevent naming conflicts. The C++ Standard Library lives in the std namespace.

Why: If you name a variable cout, it won't clash with the library's cout.

Resource: cppreference: Namespaces

```cpp
#include <iostream>

int main() {
    // Accessing via the scope resolution operator
    std::cout << "Hello World"; 
}
```
## 2. Stack Instantiation
Creating an object in C++ without using the new keyword. This places the object on the "Stack," and it is automatically deleted when it goes out of scope.

Why: Fast, safe, and avoids manual memory management (unlike pointers).

```cpp
// Syntax: ClassName variableName(arguments);
Book my_book("The Great Gatsby", 180);
my_book.display_info();
```
## 3. Pass by Reference (&)
Passing an alias to a variable rather than a copy.

Why: Allows a function to modify the original variable and avoids the performance cost of copying.

```cpp
void increment(int &num) {
    num++; // Modifies the original variable passed in
}
```
## 4. Pass by Const Reference (const &)
Passing a reference that the function is not allowed to change.

Why: The "Gold Standard" for passing large objects (like strings) because it is fast (no copy) and safe (read-only).

```cpp
void print_message(const std::string &msg) {
    // msg = "new"; // This would cause a compiler error
    std::cout << msg;
}
```
## 5. Member Initialization List
Initializing class members before the constructor body runs.

Why: More efficient than assignment inside the braces and required for const or reference members.

```cpp
class Book {
    int pages;
public:
    // Starts with a colon after the constructor signature
    Book(int p) : pages(p) {} 
};
```
## 6. Const Member Functions
Marking a method as const after the parameter list.

Why: Guarantees that the function will not modify any data members of the class.

```cpp
void display_info() const {
    // pages = 10; // This would cause a compiler error
    std::cout << pages;
}
```


## 7. Destructors (~)
A special function called automatically when an object is destroyed (goes out of scope).

Why: Crucial for "RAII" (Resource Acquisition Is Initialization)—ensures assets like levels or music are unloaded.

```cpp
class Level {
public:
    ~Level() { 
        std::cout << "Unloading assets..."; 
    }
};
```

## 8. Vectors (`std::vector`)
A dynamic array that manages its own memory and size.
* **Why:** In games, we use vectors for enemy lists, projectiles, or inventory items because we don't always know how many we will have.
* **Header:** `#include <vector>`

```cpp
std::vector<std::string> inventory;

// Add item
inventory.push_back("Sword"); 

// Optimization: Construct item directly in the vector
inventory.emplace_back("Shield"); 

// Efficient Loop (use & to avoid copying objects!)
for (const std::string &item : inventory) {
    std::cout << item << "\n";
}
```

## 7. Getters and Encapsulation
Keep data `private` to protect it, and provide `public` functions to read it.
* **Why:** Prevents other parts of your game from accidentally setting `player_health = -999`.

```cpp
class Enemy {
private:
    int health;
public:
    // Getter: marked const because it just reads
    int get_health() const { return health; }
    
    // Setter/Action: NOT const because it changes data
    void set_health(int h) { health = h; }
};