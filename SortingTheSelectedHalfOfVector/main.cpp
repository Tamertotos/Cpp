#include <vector>
#include <fmt/ranges.h>
#include <algorithm>
#include <numeric>
#include <iostream>

auto sortBiggerHalf(std::vector<int>&) -> void;

auto main() -> int {
    auto firstHalfBigger  = std::vector<int>{3, 2, 1, 0, 1, 0};
    auto secondHalfBigger = std::vector<int>{3, 2, 1, 6, 5, 4};
    auto bothHalvesSame   = std::vector<int>{5, 4, 5, 4};
    auto unequalSize   = std::vector<int>{9,2,1,8,7,6,5};


    sortBiggerHalf(firstHalfBigger);
    sortBiggerHalf(secondHalfBigger);
    sortBiggerHalf(bothHalvesSame);
    sortBiggerHalf(unequalSize);

    fmt::println(
            "{}\n{}\n{}\n{}",
            firstHalfBigger,
            secondHalfBigger,
            bothHalvesSame,
            unequalSize
    );
}

auto sortBiggerHalf(std::vector<int>& vec) -> void {
    auto middle = vec.begin() + vec.size()/2;
    auto firstHalfSum = std::accumulate(vec.begin(), middle,0);
    auto secondHalfSum = std::accumulate(middle, vec.end(),0);

    if (firstHalfSum > secondHalfSum) {
        std::ranges::sort(vec.begin(), middle);
    } else {
        std::ranges::sort(middle,vec.end());
    }
}