#include "SortingAlgorithms.h"

int main(int argc, char **argv)
{
    SortingAlgorithms testVariable;

    // If the user has entered less than 2 command line arguments:
    if (argc < 2)
    {
        cout << "Invalid input. Expected: " << endl;
        cout << "./a.out <Number of Elements>" << endl;
        return -1;
    }

    // Converts the second input argument to an int:
    testVariable.count.setCount(atoi(argv[1]);

    // The following function creates the array inside the testVariable object
    // and assigns random values to all of the elements
    testVariable.randomize();

    {
        SimpleTimer myTimer("Bucket Sort: ");

    }

    // testVariable.randomize(numElements);


    return 0;
}
