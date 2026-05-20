#include <iostream>
#include <vector>
#include <cassert>


auto dotProduct(std::vector<double> const&, std::vector<double> const&) -> double;


int main() {
    auto const vec1 = std::vector<double>{1.0,3.0,-5.0};
    auto const vec2 = std::vector<double>{4.0,-2.0,-1.0};

    auto const result = dotProduct(vec1,vec2);
    std::cout << "Dot product of given vectors is: " << result;
}

auto dotProduct(std::vector<double> const& a, std::vector<double> const& b) -> double {
    assert(a.size() == b.size());

    auto result = double();

    for (int i = 0; i < a.size() ; i++) {
        result += a[i] * b[i];
    }

    return result;
}