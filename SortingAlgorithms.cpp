#include "SortingAlgorithms.h"
#include <time.h>
#include <limits.h>
#define NUMBERS_PER_LINE_TO_PRINT 5

// Returns the count
void SortingAlgorithms::SetCount(int count)
{
    this->count = count;
}

// Prints the list:
void SortingAlgorithms::PrintList()
{
    int numbersPrintedSoFar = 0;

    if (arr == nullptr)
        return;

    cout << "Displaying " << NUMBERS_PER_LINE_TO_PRINT <<" elements per line\n";

    for (int i = 0; i < count; i++)
    {
        cout << "  " << arr[i] << "\t|";
        numbersPrintedSoFar++;
        if (numbersPrintedSoFar == NUMBERS_PER_LINE_TO_PRINT)
        {
            cout << "\n";
            numbersPrintedSoFar = 0;
        }

    }
}

// Default Constructor:
SortingAlgorithms::SortingAlgorithms()
{
    count = 0;
    arr = nullptr;
}

// Destructor
SortingAlgorithms::~SortingAlgorithms()
{
    if (this->arr != nullptr)
        delete[] arr;
}

// Clears the array and then randomizes it:
void SortingAlgorithms::Randomize()
{
    if (arr == nullptr)
        arr = new int[count];
    else
    {
        delete[] arr;
        arr = new int[count];
    }

    srand(time(NULL));

    for (int i = 0; i < count; i++)
        arr[i] = rand() % 1000 + 1;

}

void SortingAlgorithms::Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool SortingAlgorithms::isSorted()
{
    for (int i = 0; i < count; i++)
        if (arr[i] > arr[i + 1])
            return false;

    return true;
}

int SortingAlgorithms::FindIndexMin(int *array, int size)
{
    int indexMin = 0;
    int minSoFar = INT_MAX;
    for (int i = 0; i < size; i++)
        if (array[i] < minSoFar)
        {
            indexMin = i;
            minSoFar = array[i];
        }
    return indexMin;
}

// |===========================================================================|
// |                               arr  Bubble Sort                               |
// |===========================================================================|
void SortingAlgorithms::BubbleSort()
{
    bool swappedSomething = false;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swappedSomething = true;
            }
        }
        if (!swappedSomething)
            break;
        else
            swappedSomething = false;
    }
}

void SortingAlgorithms::SelectionSort()
{
    int minIndex = 0;
    for (int i = 0; i < count; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < count; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        Swap(arr + i, arr + minIndex);
    }
}
