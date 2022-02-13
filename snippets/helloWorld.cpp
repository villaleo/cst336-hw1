#include <iostream>
#include <string>
#include <utility>

int main() {
    std::pair<std::string, int> person("John", 42);
    std::cout << "Hello, " << person.first << "!\n";
    std::cout << "You are " << person.second << " years old.\n";
    return 0;
}
