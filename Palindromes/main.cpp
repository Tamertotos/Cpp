#include <iostream>
#include <algorithm>
#include <string>

auto isPalindrome(std::string&) -> bool;

auto main() -> int {
    auto test1 = std::string("kajak");
    auto test2 = std::string("ala");
    auto test3 = std::string("programowanie");

    auto result1 = isPalindrome(test1);
    auto result2 = isPalindrome(test2);
    auto result3 = isPalindrome(test3);

    std::cout << result1 << '\n' << result2 << '\n' << result3;
}

auto isPalindrome(std::string& text) -> bool {

    auto original = text;
    std::ranges::reverse(text);

    return original == text;
}