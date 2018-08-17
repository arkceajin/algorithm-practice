#ifndef TEST_H
#define TEST_H

#include <random>
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
#include <time.h>

std::vector<int> createRandomData(int n) {
  std::random_device r;
  std::seed_seq      seed{r(), r(), r(), r(), r(), r(), r(), r()};
  std::mt19937       eng(seed); // a source of random data

  std::uniform_int_distribution<int> dist;
  std::vector<int> v(n);

  generate(std::begin(v), std::end(v), bind(dist, eng));
  return v;
}

#define sortingTest(_sortFunc, _d) \
[=]() { \
    std::cout<<"Test " #_sortFunc<<std::endl; \
    std::vector<int> d = _d; \
    std::vector<int> d1 = _d; \
    clock_t t = clock(); \
    std::sort(d1.begin(), d1.end()); \
    std::cout<<"std::sort time: "<<((double)(clock() - t) / CLOCKS_PER_SEC)<<std::endl; \
    t = clock(); \
    _sortFunc(d.begin(), d.end()); \
    std::cout<<"test sort time: "<<((double)(clock() - t) / CLOCKS_PER_SEC)<<std::endl; \
    if(d == d1) std::cout<<"sort correct"<<std::endl; \
    std::cout<<std::endl; \
}();

#endif // TEST_H
