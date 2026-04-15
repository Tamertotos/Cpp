#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <vector>


auto isPrime(int number) -> bool ;
auto main() -> int {
    /* Basic printing, if-else block
    std::cout << "Input your name: ";
    auto name = std::string();
    std::cin >> name;

    if (name == "Einstein") {
        std::cout << "I know you!";
    } else {
        std::cout << "Greetings " << name << "!";
    }
    */

    /*Number guessing game
     std::srand(std::time({}));
    auto numberToGuess = std::rand() %101;
    auto guessedNumber = 0;

    while (guessedNumber != numberToGuess) {
        std::cout << "Guess a number";
        std::cin >> guessedNumber;

        if (guessedNumber > numberToGuess) {
            std::cout << "Too big. Try lower.";
        }

        if (guessedNumber < numberToGuess) {
            std::cout << "Too small. Try higher";
        }
    }

    std::cout << "Congrats!";*/

    std::cout << "Please input the numbers.\n";
    std::cout << "Type in a negative number to stop.";
    auto vec = std::vector<int>();
    auto number = 0;

    for (; std::cin >> number && number >= 0;) {
        vec.push_back(number);
    }

    for (auto elem: vec) {
        if (isPrime(elem)) {
            std::cout << elem << " is a  prime number.\n";
        } else {
            std::cout << elem << " is not a prime number.\n";
        }
    }

}

auto isPrime(int number) -> bool {
    if (number < 2) return false;

    for (auto i =  2; i <= sqrt(number) ; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}