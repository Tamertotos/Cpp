#include <iostream>
#include <vector>
#include <set>

auto nthElements(std::set<int> const& s, int n) -> void;
auto nthElements(std::vector<int> const& v, int n) -> void;

auto main() -> int {

    auto vec = std::vector<int>{10,11,12,13,14,15,16};
    nthElements(vec, 2);

    std::cout << '\n';

    auto set = std::set<int>{1,2,3,4,5,6,7,8,9,10,11,12,13};
    nthElements(set,3);


}

auto nthElements(std::vector<int> const& v, int n) -> void {

    for (auto iter = v.begin(); iter < v.end(); iter += n ) {
        std::cout << *iter << " ";
    }
}

auto nthElements(std::set<int> const& s, int n) -> void {
    int counter = 0;
    for (auto iter = s.begin(); iter != s.end(); ++iter) {
        if (counter % n == 0) {
            std::cout << *iter << ' ';
        }
        counter++;
    }

}