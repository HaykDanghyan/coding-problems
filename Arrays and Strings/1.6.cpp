#include <iostream>

std::string compressor(const std::string& str) {
    std::string result;
    static int count = 1;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == str[i + 1]) {
            ++count;
        } else {
            result += str[i] + std::to_string(count);
            count = 1;
        }
    }
    if (result.length() >= str.length()) {
        return str;
    }
    return result;
}

int main() {
    std::string str = "aaabbcc";
    std::cout << compressor(str) << std::endl;
    return 0;
}