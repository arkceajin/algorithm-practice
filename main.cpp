#include "test.h"
#include "bubblesort.h"
#include "selectionsort.h"
#include "insertionsort.h"

int main()
{
    auto testData = createRandomData(10000);

    sortingTest(bubbleSort, testData);
    sortingTest(bubbleSort2, testData);
    sortingTest(bubbleSort3, testData);

    sortingTest(selectionSort, testData);

    sortingTest(insertionSort, testData);

    return 0;
}
