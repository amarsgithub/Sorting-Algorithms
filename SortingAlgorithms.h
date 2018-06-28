#pragma once
#include "SimpleTimer.h"
#include <iostream>
using namespace std;

class SortingAlgorithms
{
private:
    int *arr;
    int count;
public:

    // Default constructor & Destructor
    SortingAlgorithms();
    ~SortingAlgorithms();

    // General getters/setters
    void SetCount(int count);

    // Clears the array and randomizes it based on the input size:
    void Randomize();

    // Prints the array:
    void PrintList();

/*
    |--------------------------------------------------------------------------|
    |                        Sorting Algorithms Breakdown                      |
    |--------------------------------------------------------------------------|
    | Sorting algorithm | Best-case | Worst-case | Average case |Space Compexity
    ----------------------------------------------------------------------------
    |    Bubble Sort    |   O(n)    |   O(n^2)   |    O(n^2)    |    O(1)      |
    |  Insertion Sort   |   O(n)    |   O(n^2)   |    O(n^2)    |    O(1)      |
    |  Selection Sort   |  O(n^2)   |   O(n^2)   |    O(n^2)    |    O(1)      |
    |   Bucket Sort     | O(n + k)  |   O(n^2)   |   O(n + k)   |    O(n)      |
    |    Radix Sort     |   O(nk)   |   O(nk)    |    O(nk)     |  O(n + k)    |
    |    Merge Sort     | O(nlogn)  |  O(nlogn)  |   O(nlogn)   |    O(n)      |
    |    Quick Sort     | O(nlogn)  |   O(n^2)   |   O(nlogn)   |   O(logn)    |
    |--------------------------------------------------------------------------|
*/

    // O(n^2) sorting algorithms:
    void BubbleSort();
    void InsertionSort();
    void SelectionSort();

    // Other sorting algorithms:
    void BucketSort();
    void RadixSort();

    // Best-case, worst-case, average-case: O(n * logn)
    void MergeSort();

    // Best-case:
    void QuickSort();

    // The below function is a general function that clears the array if it's
    // got stuff in it and then gives in random values to the array.
    void randomize(int numElements);

};
