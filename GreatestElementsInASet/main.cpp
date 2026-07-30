#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <ranges>

auto suffix(std::set<int> const&, std::vector<int> const&) -> bool;

auto main() -> int {
    auto set = std::set<int>{1,2,3};
    auto vec = std::vector<int>{2,3,3};

    auto result = suffix(set,vec);
    std::cout << result;
}


auto suffix(std::set<int> const& set, std::vector<int> const& vector) -> bool {

    if (vector.size() > set.size()) return false;

    auto subSetRange = std::ranges::subrange(std::next(set.begin(), set.size() - vector.size()), set.end());
    
    return std::ranges::equal(subSetRange, vector);
}