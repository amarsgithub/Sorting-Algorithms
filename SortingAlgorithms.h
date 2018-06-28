#pragma once
#include <iostream>
using namespace std;

class SortingAlgorithms
{
private:
    int *arr;
public:

    // Type of sorting algorithms that need to be implemented:

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

};
