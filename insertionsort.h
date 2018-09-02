#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <algorithm>

template <class T, class U = std::less<>> // std::greater<> require C++14
void insertionSort(T begin, T end, U comp = U())
{
    auto curr = std::next(begin);
    while(curr != end) {
        auto next = std::next(curr);
        auto result = std::upper_bound(begin, curr, *curr, comp);
        std::rotate(result, curr, next);
        curr = next;
    }
}

#endif // INSERTIONSORT_H
