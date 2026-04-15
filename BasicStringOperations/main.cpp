#include <iostream>
#include <string>
#include <algorithm>

auto main() -> int {
    std::cout << "Enter a single word.";
    auto text = std::string();
    std::cin >> text;

    auto firstLetter = text.front();
    auto lastLetter = text.back();
    auto size = text.size();
    auto middleLetter = text[size/2];

    auto original = text;
     std::ranges::sort(text);

    std::cout << firstLetter << '\n' << '\''  << lastLetter <<  '\'' << '\n' << size << '\n' << '"'  << middleLetter
    << '"' <<'\n' << '[' << original << ']' <<  '\n' << text ;
}