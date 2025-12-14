#pragma once
#include <string>
#include <iostream>

class IFormattable {
public:
    virtual ~IFormattable() = default;
    virtual std::string format() const = 0;
};

inline void prettyPrint(const IFormattable& object) {
    std::cout << object.format() << std::endl;
}
