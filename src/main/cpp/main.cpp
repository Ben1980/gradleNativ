#include "greeter.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    Greeter g("Gradle User");
    g.greet();
	
	std::cin;
    return 0;
}