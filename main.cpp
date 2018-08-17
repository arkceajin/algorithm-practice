#include "test.h"
#include "bubblesort.h"

int main()
{
    auto testData = createRandomData(10000);

    sortingTest(bubbleSort, testData);
    sortingTest(bubbleSort2, testData);
    sortingTest(bubbleSort3, testData);

    return 0;
}
