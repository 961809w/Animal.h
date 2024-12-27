#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // ���� ���� �Լ�
    virtual ~Animal() {}         // ���� �Ҹ���
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "�տ�" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "�Ŀ�" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        cout << "����" << endl;
    }
};
int main() {
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
        delete animals[i]; // �޸� ����
    }

    return 0;
}

