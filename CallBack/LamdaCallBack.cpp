#include <functional>
#include <string>
#include <iostream>
#include <cmath>

void print_hashes(std::function<int (const std::string&)> hash_calculator) {
    std::string strings_to_hash[] = {"you", "saved", "my", "day"};
    for(auto s : strings_to_hash)
        std::cout << s << ":" << hash_calculator(s) << std::endl;    
}

int main() {
    print_hashes( [](const std::string& str) {   /** lambda expression */
        int result = 0;
        std::cout << "String Length : " << str.length() << std::endl;
        for (int i = 0; i < str.length(); i++)
        {

         result += pow(31, i) * str.at(i);
        }
        return result;
    });
    return 0;
}

