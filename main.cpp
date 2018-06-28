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
    algorithmObject.PrintList();

    {
        SimpleTimer myTimer("bucket sort");
        algorithmObject.BubbleSort();
    }

    algorithmObject.PrintList();
    // algorithmObject.randomize(numElements);


    return 0;
}
