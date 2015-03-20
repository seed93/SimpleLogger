#include "simplog.h"

int main()
{
    
    LOG(_VERBOSE_, "verbose");
    LOG(_DEBUG_, "testing");
    LOG(_WARN_, "testing");
    LOG(_INFO_, "testing");
    LOG(_ERROR_, "testing");
    LOG(_FATAL_, "testing");
    simplog.writeStackTrace();
    return 0;
}
