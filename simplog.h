/*
   A very basic logger for output of messages at various logging levels
   with date/time stamp to standard out and a defined log file.

Author: Nate Peterson
Created: June 2013
Last Updated: Feb 2014
*/

#ifndef SIMPLOG_H
#define SIMPLOG_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

// Define logging levels
#define _FATAL_   -2    // A fatal error has occured: program will exit immediately
#define _ERROR_    -1    // An error has occured: program may not exit
#define _INFO_     0     // Nessessary information regarding program operation
#define _WARN_     1     // Any circumstance that may not affect normal operation
#define _DEBUG_    2     // Standard debug messages
#define _VERBOSE_  3     // All debug messages

#define LOG(log_level, log_fmt, log_arg...)\
    do{ \
        simplog.writeLog(log_level,   "[%s:%d][%s] " log_fmt, \
                     __FILE__, __LINE__, __FUNCTION__, ##log_arg); \
    } while (0) 


// Public functions
typedef struct {
    void ( *const writeLog )( int loglvl, const char* str, ... );
    void ( *const writeStackTrace )( void );
    void ( *const setLogDebugLevel )( int level );
    void ( *const setLogFile )( const char* file );
    void ( *const setLogSilentMode )( bool silent );
    void ( *const setLineWrap )( bool wrap );
    void ( *const flushLog )( void );
    void ( *const loadConfig )( const char* config );
} simplog_namespace;
extern simplog_namespace const simplog;

#ifdef __cplusplus
}
#endif

#endif
