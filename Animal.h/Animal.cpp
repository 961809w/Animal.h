#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // 순수 가상 함수
    virtual ~Animal() {}         // 가상 소멸자
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "왕왕" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "냐옹" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        cout << "음메" << endl;
    }
};
int main() {
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
        delete animals[i]; // 메모리 해제
    }

    return 0;
}

