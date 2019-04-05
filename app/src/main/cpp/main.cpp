#include "../../../../greeter/src/main/public/greeter.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	std::cout << "Hello World!" << std::endl;

	std::string str = argc > 1 ? argv[1] : "";

	Greeter g(str);
    g.greet();

    return 0;
}
