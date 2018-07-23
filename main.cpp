#include "SortingAlgorithms.h"

int main(int argc, char **argv)
{
    SortingAlgorithms algorithmObject;

    // If the user has entered less than 2 command line arguments:
    if (argc < 2)
    {
        cout << "Invalid input. Expected: " << endl;
        cout << "./a.out <Number of Elements>" << endl;
        return -1;
    }

    // Converts the second input argument to an int:
    algorithmObject.SetCount(atoi(argv[1]));

    // The following function creates the array inside the algorithmObject object
    // and assigns random values to all of the elements
    algorithmObject.Randomize();

// |===========================================================================|
// |                               Bubble Sort                                 |
// |===========================================================================|

    {
        cout << "Testing Bubble Sort..." << endl;
        SimpleTimer myTimer("bucket sort");
        algorithmObject.BubbleSort();
    }

    if (algorithmObject.isSorted())
        cout << "Bubble sort worked successfully." << endl;
    else
        cout << "Bubble sort failed." << endl;


// |===========================================================================|
// |                           Selection Sort                                  |
// |===========================================================================|

    cout << endl << endl;
    algorithmObject.Randomize();

    {
        cout << "Testing Selection Sort..." << endl;
        SimpleTimer myTimer("selection sort");
        algorithmObject.SelectionSort();
    }

    if (algorithmObject.isSorted())
        cout << "Selection sort worked successfully." << endl;
    else
        cout << "Selection sort failed." << endl;

// |===========================================================================|
// |                             Insertion Sort                                |
// |===========================================================================|

    cout << endl << endl;
    algorithmObject.Randomize();
    {
        cout << "Testing Insertion Sort..." << endl;
        SimpleTimer myTimer("insertion sort");
        algorithmObject.InsertionSort();
    }
    if (algorithmObject.isSorted())
        cout << "Insertion sort worked successfully." << endl;
    else
        cout << "Insertion sort failed." << endl;

// |===========================================================================|
// |                               Merge Sort                                  |
// |===========================================================================|


    cout << endl << endl;
    algorithmObject.Randomize();
    {
        cout << "Testing Merge Sort..." << endl;
        SimpleTimer myTimer("merge sort");
        algorithmObject.MergeSort();
    }
    if (algorithmObject.isSorted())
        cout << "Merge sort worked successfully." << endl;
    else
        cout << "Merge sort failed." << endl;

// |===========================================================================|
// |                              Quick Sort                                   |
// |===========================================================================|

    cout << endl << endl;
    algorithmObject.Randomize();
    {
        cout << "Testing Quick Sort..." << endl;
        SimpleTimer myTimer("quick sort");
        algorithmObject.QuickSort();
    }
    if (algorithmObject.isSorted())
        cout << "Quick sort worked successfully." << endl;
    else
        cout << "Quick sort failed." << endl;

// |===========================================================================|
// |                              Quick Sort                                   |
// |===========================================================================|

    cout << endl << endl;
    algorithmObject.Randomize();
    {
        cout << "Testing Shell Sort..." << endl;
        SimpleTimer myTimer("shell sort");
        algorithmObject.ShellSort();
    }
    if (algorithmObject.isSorted())
        cout << "Shell sort worked successfully." << endl;
    else
        cout << "Shell sort failed." << endl;

    return 0;
}
