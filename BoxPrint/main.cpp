#include <iostream>
#include <vector>
#include <string>
#include <iostream>

auto boxPrint(std::vector<std::string> const&, char const  = '*') -> void;

auto main() -> int {
    boxPrint({"a", "quick", "brown", "fox"});
    boxPrint({"a", "quick", "brown", "fox"}, '*');
    boxPrint({"a", "quick", "brown", "fox"}, '#');
    boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
    boxPrint({""});
    boxPrint({});
    boxPrint({}, '#');
    boxPrint({"", "hmmmm", ""});
    boxPrint({"", "", ""});
}


auto boxPrint(std::vector<std::string> const& vec, char const delimiter) -> void {

    auto maxElement = 0;
    for (auto i = 0; i < vec.size() ; i++) {
        if (vec[i].size() > maxElement) {
            maxElement = vec[i].size();
        }
    }

    for (auto i = 0; i < maxElement + 2; i++) {
        std::cout << delimiter;
    }

    std::cout << '\n';

    for (auto i = 0; i < vec.size(); i++) {
        std::cout << delimiter;
        std::cout << vec[i];

        auto const variableSize = maxElement - vec[i].size();
        for (auto j = 0; j < variableSize; j++) {
            std::cout << " ";
        }

        std::cout << delimiter << '\n';
    }


    for (auto i = 0; i < maxElement + 2; i++) {
        std::cout << delimiter;
    }

    std::cout << std::endl;
    std::cout << std::endl;

}