int main() {
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
        delete animals[i]; // �޸� ����
    }

    return 0;
}
