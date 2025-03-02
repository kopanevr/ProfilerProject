#ifndef PROFILER_H
#define PROFILER_H

#include <iostream>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

namespace PROFILER {
class Profiler final
{
private:
    string message;
    steady_clock::time_point start;
public:
    explicit Profiler(const string& msg = "");
    ~Profiler();
};}

#define UNIQ_ID_IMPL(lineno) _a_local_var_ ## lineno
#define UNIQ_ID(lineno) UNIQ_ID_IMPL(lineno)

#define DURATION(message) PROFILER::Profiler UNIQ_ID(__LINE__){message}

#endif
