#include <string>
#include <vector>
#include <fmt/ranges.h>
#include <algorithm>



auto eliminate(std::vector<int>& x) -> void;

auto main() -> int {
    auto  vec = std::vector<int>{7,4,9,11,8};
    eliminate(vec);
}


auto eliminate(std::vector<int>& x) -> void {
    auto max_elem = std::ranges::max_element(x);
    auto min_elem = std::ranges::min_element(x);

    x.erase(max_elem);
    x.erase(min_elem);

    fmt::println("{}", x);
}


