#define FMT_HEADER_ONLY

#include <iostream>
#include "../public/greeter.hpp"
#include "fmt/format.h"

void Greeter::greet() {
    fmt::print("Hello, {} your name has {} chars.", name, getNameLength());
}

int Greeter::getNameLength() {
    return name.length();
}