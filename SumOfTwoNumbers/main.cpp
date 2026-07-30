#include <vector>
#include <iostream>
#include <fmt/base.h>
#include <fmt/ranges.h>

auto sumOfTwo(std::vector<int> const&, int) -> void;

auto main() -> int {
    auto vec = std::vector<int>{2,4,5,8,9,11,13,15};
    sumOfTwo(vec,21);
}

auto sumOfTwo(std::vector<int> const& vector, int value) -> void {
    auto left = 0;
    auto right = vector.size() - 1;

    while (left < right) {
        auto sum = vector[left] + vector[right];

        if (sum == value) {
            std::cout << left << " " << right;
            return;
        }

        if (sum < value) {
            left++;
        } else {
            right--;
        }
    }
}
