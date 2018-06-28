#pragma once

#include <chrono>
#include <string>
using namespace std;

using highResClock = std::chrono::high_resolution_clock;
using timePoint = highResClock::time_point;

class SimpleTimer
{
    string name;
    timePoint start;
    timePoint end;
    std::chrono::duration<double> elapsed;

public:
    SimpleTimer();
    SimpleTimer(string name);

    ~SimpleTimer();
};
