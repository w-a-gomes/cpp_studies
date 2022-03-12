#include <iostream>
#include <string>

class A {
private:
    std::string className;
public:
    A(std::string name);
    std::string getName();
    void setName(std::string name);
};

A::A(std::string name) {
    this->setName(name);
    std::cout << "Construtor de " << this->getName() << std::endl;
}
std::string A::getName() {return this->className;}
void A::setName(std::string name) {this->className = name;}

class A1 : public A {
public:
    explicit A1(std::string name);
};
A1::A1(std::string name):A(name) {};

class A2 : public A {
public:
    explicit A2(std::string name);
};
A2::A2(std::string name):A(name) {};

class B : public A1, A2 {
public:
    explicit B(std::string name);
};
B::B(std::string name):A1(name), A2(name) {};

int main() {
    A a("A");
    A1 a1("A1");
    A2 a2("A2");
    B b("B");
    
    return 0;
}
