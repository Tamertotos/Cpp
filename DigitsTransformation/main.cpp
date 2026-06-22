#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ranges>
#include <set>
#include <fmt/ranges.h>
#include <fmt/base.h>


auto main() -> int {
    std::cout << "Enter a single digit number";
    auto num = int();
    std::cin >> num;

    switch (num) {
        case 0:
            std::cout << "zero";
            break;
        case 1:
            std::cout << "one";
            break;
        case 2:
            std::cout << "two";
            break;
        case 3:
            std::cout << "three";
            break;
        case 4:
            std::cout << "four";
            break;
        case 5:
            std::cout << "five";
            break;
        case 6:
            std::cout << "six";
            break;
        case 7:
            std::cout << "seven";
            break;
        case 8:
            std::cout << "eight";
            break;
        case 9:
            std::cout << "nine";
            break;
        default:
            std::cout << "Incorrect input! Try again by restarting the program";
            break;
    }

    std::cout << "Enter a string representation of a number";
    auto text = std::string();
    std::cin >> text;
    if (text == "zero") {
        std::cout << 0;
    } else if (text == "one") {
        std::cout << 1;
    } else if (text == "two") {
        std::cout << 2;
    } else if (text == "three") {
        std::cout << 3;
    } else if (text == "four") {
        std::cout << 4;
    } else if (text == "five") {
        std::cout << 5;
    } else if (text == "six") {
        std::cout << 6;
    } else if (text == "seven") {
        std::cout << 7;
    } else if (text == "eight") {
        std::cout << 8;
    } else if (text == "nine") {
        std::cout << 9;
    } else {
        std::cout << "Incorrect input! Try again by restarting the program.";
    }
}
