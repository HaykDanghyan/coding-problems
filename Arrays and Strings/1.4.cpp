#include <iostream>
#include <vector>

bool palindromePermutation(std::string& str) {
    std::vector<int> vec;
    int _xor = 0;
    int j = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] != ' ')
        {
            if (str[i] >= 'a' || str[i] <= 'z')
            {
                str[i] -= 32; 
            }
            vec.push_back(str[i]);
            _xor = _xor ^ vec[j];
            ++j;
        }
    }
    if (_xor != 0 && vec.size() % 2 != 0)
        return true;

    if (_xor == 0 && vec.size() % 2 == 0)
        return true;
   

    return false;

}

int main() {
    std::string str = "Tact Coa";
    std::cout << std::boolalpha << palindromePermutation(str) << std::endl;
    return 0;
}