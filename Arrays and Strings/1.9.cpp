#include <iostream>
#include <string>
bool stringRotation(std::string& s1, std::string& s2) {
    auto x = s1.length();
    while (x--) {
        if (s1 == s2) {
            return true;
        }
        s1 = s1.substr(1) + s1[0];
    }
    return false;
}

int main() {
    std::string s1 = "waterbottle";
    std::string s2 = "erbottlewat";
    std::cout << std::boolalpha << stringRotation(s1, s2) << std::endl;
}