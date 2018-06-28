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

    // =========================================================================
    //                             Bubble Sort
    // =========================================================================

    {
        cout << "Testing Bubble Sort " << endl;
        SimpleTimer myTimer("bucket sort");
        algorithmObject.BubbleSort();
    }

    if (algorithmObject.isSorted())
        cout << "Bubble sort worked successfully." << endl;
    else
        cout << "Bubble sort failed." << endl;


    // =========================================================================
    //                             Selection Sort
    // =========================================================================

    algorithmObject.Randomize();
    cout << endl << endl;

    {
        cout << "Testing Selection Sort " << endl;
        SimpleTimer myTimer("selection sort");
        algorithmObject.SelectionSort();
    }

    if (algorithmObject.isSorted())
        cout << "Selection sort worked successfully." << endl;
    else
        cout << "Selection sort failed." << endl;


    // =========================================================================
    //                             Insertion Sort
    // =========================================================================

    algorithmObject.Randomize();
    cout << endl << endl;

    {
        cout << "Testing Insertion Sort " << endl;
        SimpleTimer myTimer("insertion sort");
        algorithmObject.InsertionSort();
    }

    return 0;
}
