#include <iostream>

using namespace std;

#include "profiler.h"

void _TEST()
{
    cout << "DEBUG" << endl;
    {
        DURATION();
    }
}

int main()
{
    _TEST();
    return 0;
}
