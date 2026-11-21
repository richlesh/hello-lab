#include <iostream>
#include <string>

int main() {
    const std::string greetings[] = {
        "English:  Hello, World",
        "Spanish:  Hola, mundo",
        "French:   Bonjour, le monde",
        "German:   Hallo, Welt",
        "Greek:    Γειά σου, κόσμε",
        "Japanese: こんにちは、世界",
        "Chinese:  你好，世界"
    };

    for (const std::string& greeting : greetings) {
        std::cout << greeting << std::endl;
    }
    return 0;
}
