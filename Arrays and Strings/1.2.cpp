#include <iostream>
#include <unordered_map>

bool isPermutation(const std::string& s1, const std::string& s2) {
	if (s1.length() != s2.length()) {
		return false;
	}
	std::unordered_map<char, int> m1;
	std::unordered_map<char, int> m2;

	for (int i = 0; i < s1.length(); ++i) {
		m1[s1[i]]++;
		m2[s2[i]]++;
	}	

	for (const auto& elem : m1) {
		if (m2[elem.first] != elem.second) {
			return false;
		}
	}
	return true;
}

int main() {
	std::cout << std::boolalpha << isPermutation("anagram", "nagaram");
}
