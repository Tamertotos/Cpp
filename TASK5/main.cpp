#include <iostream>

auto gcdRec(int a, int b) -> int;
auto sumDigits(int n) -> int;
auto numDigits(int n) -> int;
auto printOddEven(int n) -> void;
auto hailstone(int n) -> void;

auto main() -> int {
    std::cout << "gcdRec(12,42) = " << gcdRec(12,42) << '\n' << "gcdRec(12,25) = " << gcdRec(12,25) << '\n';
    std::cout << "sumDigits(123) = " << sumDigits(123) << '\n' << "sumDigits(971) = " << sumDigits(971) << '\n';
    std::cout << "numDigits(12345) = " << numDigits(12345) << '\n' << "numDigits(971) = " << numDigits(971) << '\n';

    std::cout << "printOddEven(15): ";
    printOddEven(15);
    std::cout << '\n';
    std::cout << "printOddEven(14): ";
    printOddEven(14);
    std::cout << '\n';

    std::cout << "hailstone(13): ";
    hailstone(13);
}

auto sumDigits (int const n) -> int {
    return n <= 9 ? n : n%10 +  sumDigits(n / 10);
}

auto numDigits(int n) -> int {
    return n <= 9 ? 1 : 1 +   numDigits(n/10);
}

auto gcdRec(int a, int b) -> int {
    return a == b ? a : (a < b ? gcdRec(a, b -a) : gcdRec(a -b , b));
}

auto printOddEven(int n) -> void {
    if (n <= 0) return;

    if (n > 0) {
         printOddEven(n - 2);
    }
    std::cout << n << ' ';
}

auto hailstone(int n) -> void {
    std::cout << n << ' ';
    if (n == 1) return;

    if (n % 2 == 0) {
        return hailstone(n / 2);
    } else {
        return hailstone (3 * n + 1);
    }
}