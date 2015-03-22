#include "simplog.h"

int main()
{
    simplog.loadConfig("config.txt");
    LOG(_VERBOSE_, "testing%d", 1);
    LOG(_DEBUG_, "testing");
    LOG(_WARN_, "testing");
    const char * temp = "testing%d";
    LOG(_INFO_, temp, 4);
    LOG(_ERROR_, "testing");
    LOG(_FATAL_, "testing");
    STACKTRACE();
    return 0;
}
