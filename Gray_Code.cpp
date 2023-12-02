#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> grayCode(int n) {
    std::vector<int> result;
    for (int i = 0; i < (1 << n); ++i) {
        result.push_back(i ^ (i >> 1));
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = grayCode(n);

    for (int num : result) {
        for (int i = n - 1; i >= 0; --i) {
            std::cout << ((num >> i) & 1);
        }
        std::cout << '\n';
    }

    return 0;
}
