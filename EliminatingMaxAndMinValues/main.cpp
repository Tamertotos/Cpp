#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>


int main() {
    auto vec = std::vector<int>();
    std::cout << "Enter 7 integer numbers!";


    while (vec.size() < 7) {
        auto numbers = int();
        std::cin >> numbers;
        vec.push_back(numbers);
    }

    std::ranges::sort(vec);

    std::cout << "[";
    for (int i = 0; i < vec.size() ; i++) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";

    std::cout << "erasing the first and the last item\n";
    vec.erase(vec.begin());
    vec.erase(vec.end() - 1);

    std::cout << "[";
    for (int i = 0; i < vec.size() ; i++) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";

}
