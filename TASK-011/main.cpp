#include <iostream>
#include <climits>
#include <string>


auto main() -> int {


    auto maxValue = INT_MIN;
    auto minValue = INT_MAX;
    auto maxCount = int();
    auto minCount = int();

    //To prevent printing INT_MAX and INT_MIN if user enters 0 immediately.
    auto anyNumbers = false;

    while (true) {
        auto number = int();
        std::cout << "To quit the program enter 0\n" << "Enter a number: ";
        std::cin >> number;

        if (number == 0) break;


        anyNumbers = true;

        if (number > maxValue) {
            maxValue = number;
            maxCount = 0;
        }

        if (number < minValue) {
            minValue = number;
            minCount = 0;
        }

        if (number == maxValue) maxCount++;
        if (number == minValue) minCount++;

        std::cout << "---------\n";

    }

    if (!anyNumbers) {
        std::cout << "No numbers were entered.\n";
    } else {
        std::cout << "Min value= " << minValue << ' ' << minCount << " times.\n"
        << " Max value= " << maxValue <<  ' ' << maxCount << " times.";
    }
}
