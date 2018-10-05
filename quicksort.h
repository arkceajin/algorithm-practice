#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>

template <class T, class U = std::less<>> // std::greater<> require C++14
void quickSort(const T& begin, const T& end, U comp = U()) {
    if(end <= begin) {
        return;
    }

    auto pivot = *std::next(begin, std::distance(begin, end)/2);
    auto leftMiddle = std::partition(begin, end, [pivot, comp](const auto& em){
        return comp(em, pivot);
    });
    auto rightMiddle = std::partition(begin, end, [pivot, comp](const auto& em){
        return !comp(pivot, em);
    });

    quickSort(begin, leftMiddle);
    quickSort(rightMiddle, end);
}

#endif // QUICKSORT_H
