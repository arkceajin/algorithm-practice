#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>

template <class T, class U = std::less<>> // std::greater<> require C++14
void quickSort(const T& begin, const T& end, U comp = U()) {
    if(end <= begin) {
        return;
    }

    T key = begin;
    T i = std::next(key);
    while (i != end) {
        if(comp(*i, *key)) {
            std::rotate(key, i, i + 1);
            key++;
        }
        i++;
    }

    quickSort(begin, key);
    quickSort(key + 1, end);
}

#endif // QUICKSORT_H
