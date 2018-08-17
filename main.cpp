#include <iostream>
#include <array>
#include "bubblesort.h"

int main()
{
    std::array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    bubbleSort2(s.begin(), s.end());
//    for(auto i = 0; i < s.size(); i++)
//        std::cout << s.at(i) << " ";

    std::cout << std::endl;

    for (auto a : s) {
        std::cout << a << " ";
    }
    return 0;
}
