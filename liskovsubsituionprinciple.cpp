#include <iostream>
using namespace std;


class Bird {
public:
    virtual void eat() {
        cout << "Bird is eating\n";
    }
};


class FlyingBird : public Bird {
public:
    virtual void fly() {
        cout << "Flying in the sky\n";
    }
};

class Sparrow : public FlyingBird {
public:
    void fly() override {
        cout << "Sparrow is flying\n";
    }
};

class Penguin : public Bird {
public:
    void swim() {
        cout << "Penguin is swimming\n";
    }
};

int main() {
    Sparrow s;
    s.fly();       

    Penguin p;
    p.swim();     

    return 0;
}


// This is the example of Liskov Subsititution Principle .The LSP states that Subclass should be subsitutable for their base class .Here if we make birds class as base class with method fly then penguin class can not be subsitutable for birds class because penguin can not fly .so we have cretaed a new class called flying bird,so that sparrow class can be subsitutable for flying bird class