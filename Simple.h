#pragma once
#include <string>

class CSimple
{
friend class CPizzaHut;

public:
    CSimple();
    ~CSimple();


private:
    int a;
    double b;
    char* c;
    std::string* d;
};



