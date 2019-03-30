#include "../../../../greeter/src/main/public/greeter.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
	std::cout << "Hello World!" << std::endl;
	
	Greeter g("Gradle User");
    g.greet();

    return 0;
}
