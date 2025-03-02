#include "profiler.h"

using namespace PROFILER;

Profiler::Profiler(const string& msg)
    :   message(msg + ": "),
        start(steady_clock::now())
{
}

Profiler::~Profiler()
{
    auto finish = steady_clock::now();
    auto dur = finish - start;
    cerr << "PROFILER:" << endl;
    cerr << message << duration_cast<microseconds>(dur).count() << " ms" << endl;
}
