#include "SortingAlgorithms.h"
#define NUMBERS_PER_LINE 5

// Returns the count
void SortingAlgorithms::SetCount(int count)
{
    this->count = count;
}

// Clears the array and then randomizes it:
void SortingAlgorithms::Randomize()
{

}

// Prints the list:
void SortingAlgorithms::PrintList()
{
    int numbersPrintedSoFar = 0;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " | ";
        if (numbersPrintedSoFar == NUMBERS_PER_LINE)
        {
            cout << endl;
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
        delete[] array;

}
