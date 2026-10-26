#include <iostream>
#include <string>

auto summation(int number) -> int ;

int main() {

    auto number = int();
    auto maxNumber = int();
    auto maxSum = int();

    while (true) {
        std::cout << "Please enter a natural number\n";
        std::cin >> number;

        if (number == 0) {
            std::cout << "Leaving the loop...\n";
            break;
        }


        //To put temporary summation and later on to compare with the sum
        auto temp = summation(number);
        std::cout << "summation is:" << temp << "\n";

        if (temp > maxSum) {
            maxSum = temp;
            maxNumber = number;
        }
    }

    std::cout << "Max sum of digits was " << maxSum << " for " << maxNumber;
}

auto summation(int number) -> int {
    auto numberSum = int();
    while (number > 0) {
        numberSum += number % 10;
        number /= 10;
    }

    return numberSum;
}