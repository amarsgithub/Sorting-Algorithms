#include <iostream>
#include "SimpleTimer.h"
using namespace std;

SimpleTimer::SimpleTimer()
{
    // Get the current time
    start = highResClock::now();
}

SimpleTimer::SimpleTimer(string name)
{
    // Get the current time
    this->name = name;
    start = highResClock::now();
}

SimpleTimer::~SimpleTimer()
{
    end = highResClock::now();
    elapsed = end - start;
    cout << "Elapsed time for " << name << ": "<< elapsed.count() << " seconds\n";
}
