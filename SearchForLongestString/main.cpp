#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>
#include <fmt/ranges.h>
#include <fmt/base.h>

namespace v1 {
    auto printLongestString(const  std::vector<std::string>& vec) -> std::string {
        auto longestString = std::ranges::max(vec, std::ranges::less(),std::ranges::size);
        return longestString;
    }

}

namespace v2 {
    auto printLongestString(const  std::vector<std::string>& vec) -> std::string {

        auto longestString = std::ranges::max_element(vec, std::ranges::less(), std::ranges::size );
        return *longestString;
    }

}

namespace v3 {
    auto printLongestString(const  std::vector<std::string>& vec) -> std::string {
        auto longestString = std::ranges::min(vec, std::ranges::greater(),std::ranges::size);
        return longestString;
    }

}

namespace v4 {
    auto printLongestString(const  std::vector<std::string>& vec) -> std::string {

        auto longestString = std::ranges::min_element(vec, std::ranges::greater(), std::ranges::size);
        return *longestString;
    }

}

int main() {
    auto const words = std::vector<std::string>{
        "those", "are", "extremely",
        "random", "words", "in",
        "this", "particular", "example"
    };

      fmt::println("{}" , v1::printLongestString(words));
      fmt::println("{}" , v2::printLongestString(words));
      fmt::println("{}" , v3::printLongestString(words));
      fmt::println("{}" , v4::printLongestString(words));

}