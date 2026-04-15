#include <iostream>
#include <bitset>


auto encode(int sex, int marit, int age, int edu, int place, int region, int answer) -> unsigned short;
auto info(unsigned short code) -> void;
auto main() -> int {


    auto resultShort = encode(0,3,2,3,0,12,6);


     info(resultShort);
}


auto info(unsigned short code) -> void {
    auto sex = (code >> 0) &0b1;
    auto maritalStatus = (code >> 1) &0b11;
    auto ageGroup = (code >> 3) &0b11;
    auto education = (code >> 5) &0b11;
    auto livingPlace = (code >> 7) &0b11;
    auto region = (code >> 9) &0b1111;
    auto answer = (code >> 13) &0b111;

    std::cout << "sex:\t\t" << sex << '\n' << "marital status\t" << maritalStatus
    << '\n' << "age group:\t" << ageGroup << '\n' <<  "education:\t" << education
    << '\n' << "living place:\t" << livingPlace << '\n' << "region:\t\t" << region
    << '\n' << "answer:\t\t" << answer;
}

auto encode(int sex, int marit, int age, int edu, int place, int region, int answer) -> unsigned short {
    auto a = sex;
    auto b = marit << 1;
    auto c = age << 3;
    auto d = edu << 5;
    auto e = place << 7;
    auto f = region << 9;
    auto g = answer << 13;

    return  a|b|c|d|e|f|g;


}