#include <utility>

#ifndef _GREETER_H_
#define _GREETER_H_

#include <string>

#ifdef _WIN32
    #ifdef GREETER_MODULE_EXPORT
        #define GREETER_API __declspec(dllexport)
    #else
        #define GREETER_API __declspec(dllimport)
    #endif
#else
    #define GREETER_API
#endif

class GREETER_API Greeter {
public:
    explicit Greeter(std::string name_) : name(std::move(name_)) {};
    Greeter() : name("World") {};
    void greet();
    int getNameLength();
private:
    std::string name;
};

#endif