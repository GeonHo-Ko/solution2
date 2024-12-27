#include <iostream>


using namespace std;

class Animal {
public:
	virtual void makeSound() const = 0;
	virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "월월" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "야옹" << std::endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        std::cout << "음메" << std::endl;
    }
};

int main() {
    const int m = 3;
    Animal* animals[m] = { new Dog(), new Cat(), new Cow() };

    for (int i = 0; i < m; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < m; i++) {
        delete animals[i];
    }

    return 0;
}