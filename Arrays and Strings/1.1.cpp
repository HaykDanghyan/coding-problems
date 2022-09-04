#include <iostream>

bool hasUnique(const std::string& str) {
	int bit = 0;
	for (int i = 0; i < str.length(); ++i) {
		if (bit & (1 << (str[i] - 65) - 1)) {
			return false;
		}
		bit |= (1 << (str[i] - 65) - 1);
	}	
	return true;
}

int main() {
	std::string str = "helo";
	std::cout << std::boolalpha << hasUnique(str) << std::endl;
	return 0;
}
