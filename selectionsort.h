#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <algorithm>

template <class T, class U = std::greater<>> // std::greater<> require C++14
void selectionSort(T begin, T end, U comp = U())
{
    for(auto i = begin; i != end - 1; i++) {
        auto k = i;
        for(auto j = i + 1; j != end; j++) {
            if(comp(*k, *j)) {
                k = j;
            }
        }
        if(k != i)
            std::swap(*i, *k);
    }
}

#endif // SELECTIONSORT_H
