#include <iostream>
#include "../public/greeter.hpp"

void Greeter::greet() {
    std::cout << "Hello, " << name << ", your name has " << getNameLength() << " chars." << std::endl;
}

int Greeter::getNameLength() {
    return name.length();
}