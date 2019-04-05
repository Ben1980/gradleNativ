# gradleNativ

A gradle native based multi project build setup, as discussed on [thoughts-on-cpp.com](https://thoughts-on-cpp.com/.....) for a C++ command line application.


## Getting Started

This is a very basic build setup defined with gradle's native support.
To get it up and running you just need to execute `./gradlew build` which will build the example application. Tests can be executed via `./gradlew check`.


### Prerequisites

- [fmt](http://fmtlib.net/latest/index.html) external library used as an example

The {fmt} lib, which is used as an example external library, needs to be on the same directory level as the gradleNative project. In case you want to change the directory make sure to alter the related path defined at at greeter library build.gradle file

```
def fmtHeaders = file("$rootDir/../fmt/include")
```

## Authors

* **Benjamin Mahr** - [Ben1980](https://github.com/Ben1980)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details