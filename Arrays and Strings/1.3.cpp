#include <iostream>

void URLify(std::string& make_url) {
    std::string url{};
    for (int i = 0; i < make_url.length(); ++i) {
        if (make_url[i] != ' ') {
            url += make_url[i];
        } else {
            url += "%20";
        }
    }
    make_url = url;
}

int main() {
    std::string str = "Mr John Smith";
    URLify(str);
    std::cout << str << std::endl;
    return 0;
}