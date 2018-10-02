cmake_minimum_required(VERSION 2.8)

project(algorithm-practice)

set(SOURCES
    main.cpp)

set(HEADERS
    test.h
    bubblesort.h
    insertionsort.h
    quicksort.h
    selectionsort.h)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
