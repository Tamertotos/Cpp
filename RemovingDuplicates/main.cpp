#include <string>
#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>

auto stream_way_of_splitting(std::string& data) -> std::set<std::string>;

auto main() -> int {
    auto data = std::string("Adam Illia Ewa Anastasia Illia Ewa Illia Maciej Adam Natalia");
    auto name_set = std::set<std::string>();
    auto text = std::string();

    for (auto i = 0 ; i < data.size(); i++) {
        if (data[i] == ' ') {
            name_set.insert(text);
            text = "";
        } else {
            text += data[i];
            if (i == data.size() - 1) {
                name_set.insert(text);
            }
        }
    }

    for (auto elem : name_set) {
         std::cout << elem << ' ';
    }


    std::cout << '\n';
    auto result = stream_way_of_splitting(data);

    for (auto elem : result) {
        std::cout << elem << ' ';
    }

    std::cout << '\n';
}


auto stream_way_of_splitting(std::string& data) -> std::set<std::string> {
    auto names = std::set<std::string>();
    auto buf = std::string();
    auto string_stream = std::stringstream(data);

    while (string_stream >> buf) {
        names.insert(buf);
    }

    return names;
}