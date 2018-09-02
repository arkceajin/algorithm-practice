#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <algorithm>

/**
 * I'm not sure this is bubble sort or not
 */
template <class T, class U = std::greater<>> // std::greater<> require C++14
void bubbleSort(T begin, T end, U comp = U())
{
    for(auto i = end - 1; i >= begin; i--) {
        for(auto j = begin; j != i; j++) {
            if(comp(*j, *i)) {
                std::swap(*j, *i);
            }
        }
    }
}

template <class T, class U = std::greater<>> // std::greater<> require C++14
void bubbleSort2(T begin, T end, U comp = U())
{
    auto low = begin;
    auto high = end - 1;
    while(low < high) {
        for(auto i = low; i != high; i++) {
            if(comp(*i, *(i + 1))) {
                std::swap(*i, *(i + 1));
            }
        }
        high--;
        for(auto i = high; i != low; i--) {
            if(comp(*(i - 1), *i)) {
                std::swap(*i, *(i - 1));
            }
        }
        low++;
    }
}

template <class T, class U = std::greater<>> // std::greater<> require C++14
void bubbleSort3(T begin, T end, U comp = U())
{
    while(end != begin) {
        for(auto i = std::next(begin); i != end; ++i) {
            if(comp(*(i - 1), *i)) {
                std::swap(*(i - 1), *i);
            }
        }
        end--;
    }
}

#endif // BUBBLESORT_H
