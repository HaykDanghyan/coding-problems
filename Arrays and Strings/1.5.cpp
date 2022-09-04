#include <iostream>

bool oneAway(const std::string& s1, const std::string& s2) {
    if (s2.length() > s1.length()) {
        return false;
    }
    if (abs(s1.length() - s2.length()) > 1) {
        return false;
    }
}

int main() {

}