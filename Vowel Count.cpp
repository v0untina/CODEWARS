#include <iostream>
#include <string>

int getCount(std::string inputStr) {
    int num_vowels = 0;
    for (char vow : {'a', 'e', 'i', 'o', 'u'}) {
        num_vowels += std::count(inputStr.begin(), inputStr.end(), vow);
    }
    return num_vowels;
}
