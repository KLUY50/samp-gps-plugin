#pragma once


typedef void (*logprintf_t)(char* format, ...);
extern logprintf_t logprintf;
extern void *pAMXFunctions;


struct Path;


struct Callback {
    int path;
    std::string function;
    int id;
};