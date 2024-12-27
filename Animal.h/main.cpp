int main() {
    Animal* animals[] = { new Dog(), new Cat(), new Cow() };

    for (int i = 0; i < 3; ++i) {
        animals[i]->makeSound();
        delete animals[i]; // 메모리 해제
    }

    return 0;
}
