#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>
#include <string_view>

int main() {
    auto vec1 = std::vector<int>{1,1,1,2,3,1,1,2,2,3};

    std::ranges::sort(vec1.begin(), vec1.begin()+5);
    std::ranges::sort(vec1.begin()+5, vec1.end());

    for (auto elem: vec1) {
        std::cout << elem << ' ';
    }

    std::cout << '\n';

    auto isEqual = std::ranges::equal(vec1.begin(), vec1.begin()+5, vec1.begin()+5, vec1.end());
    std::cout << (isEqual ?  "Equal": "Not Equal");
}