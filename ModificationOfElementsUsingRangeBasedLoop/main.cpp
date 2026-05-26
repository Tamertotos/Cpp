#include <algorithm>
#include <vector>
#include <iostream>
#include <fmt/ranges.h>

auto main() -> int {
    auto nums = std::vector<int>();
    auto nums2 = std::vector<int>(5);

    for (auto i = 0; i < 5; i++) {
        auto elem = int();
        std::cin >> elem;
        nums.push_back(elem);
    }

    for (auto& elem : nums2) {
        std::cin >> elem;
    }

    fmt::println("{}" , nums);
    fmt::println("{}" , nums2);


}