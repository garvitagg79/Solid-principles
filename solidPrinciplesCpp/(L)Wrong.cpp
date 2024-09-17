#include <iostream>

class Bird {
public:
    virtual void fly() {
        std::cout << "Flying...\n";
    }
};

class Penguin : public Bird {
public:
    void fly() override {
        std::cout << "I can't fly!\n";
    }
};

void makeBirdFly(Bird& bird) {
    bird.fly();
}

int main() {
    Bird sparrow;
    Penguin penguin;

    makeBirdFly(sparrow);  // Expected: "Flying..."
    makeBirdFly(penguin);  // Problematic: Violates LSP because Penguins can't fly
}
