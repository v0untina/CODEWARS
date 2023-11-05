#include <vector>

std::vector<int> splitInteger(int num, int parts) {
    std::vector<int> result(parts, num / parts); 
    int remainder = num % parts; 

    for (int i = 0; i < remainder; i++) {
        result[i]++;
    }

    return result;
}
