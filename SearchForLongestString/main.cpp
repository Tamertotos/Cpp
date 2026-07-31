#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <fmt/ranges.h>

namespace v1 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string;
}

namespace v2 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string;
}

namespace v3 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string;
}

namespace v4 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string;
}

auto main() -> int {
    auto vec = std::vector<std::string>{"tamerc","can","kotannn"};

    auto v1Method = v1::printLongestString(vec);
    auto v2Method = v2::printLongestString(vec);
    auto v3Method = v3::printLongestString(vec);
    auto v4Method = v4::printLongestString(vec);


    fmt::print("{}\n{}\n{}\n{}", v1Method,v2Method,v3Method,v4Method);
}

namespace v1 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string {
        return std::ranges::max(v, {}, std::ranges::size);
    }
}

namespace v2 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string {
        auto maxIter = std::ranges::max_element(v, {}, std::ranges::size);
        return *maxIter;
    }
}

namespace v3 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string {
        return std::ranges::min(v, std::ranges::greater(), std::ranges::size);
    }
}

namespace v4 {
    auto printLongestString(std::vector<std::string> const& v) -> std::string {
        auto minIter = std::ranges::min_element(v, std::ranges::greater(), std::ranges::size);
        return *minIter;
    }
}
