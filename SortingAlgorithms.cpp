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
    cout << "Seeding random number generator and creating new array" << endl;
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

void SortingAlgorithms::InsertionSort()
{
    int x, y, z;

    for (z = 1; z < count; z++)
    {
        y = arr[z];

        for (x = z; x > 0 && arr[x] < arr[x-1]; x--)
        {
            Swap(arr + x, arr + x - 1);
        }
    }

}

// |===========================================================================|
// |                                Merge Sort                                 |
// |===========================================================================|

void SortingAlgorithms::MergeSortHelper(int *arr, int lo, int hi)
{
    int mid = lo + (hi - lo) / 2, i = lo, j = mid + 1, k = 0;
    int *aux;

    if (lo >= hi)
        return;

    // Recursive calls
    MergeSort(arr, lo, mid);
    MergeSort(arr, mid + 1, hi);

    aux = new int[hi - lo + 1];

    while (i <= mid || j <= hi)
    {
        if (i > mid)
            aux[k++] = array[j++];
        else if (j > hi)
            aux[k++] = array[i++];
        else if (array[i] < array[j])
            aux[k++] = array[i++];
        else
            aux[k++] = array[j++];
    }
    
    for (i = lo; i <= hi; i++)
        array[i] = aux[i - lo];

    delete[] aux;    
}

void SortingAlgorithms::MergeSort()
{
    // Recursive call to help with merge sort:
    MergeSortHelper(arr, 0, count - 1); 
}

