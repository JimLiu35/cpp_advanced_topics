#ifndef EXER01_H_
#define EXER01_H_

#include <iostream>
#include <cstdio>
#include <cstring>

const unsigned long long int divider[5] = {1000, 1000000, 1000000000, 1000000000000,
                                           1000000000000000};

class Integer
{
private:
    unsigned long long int n;

public:
    Integer(const unsigned long long int num);
    ~Integer();
    void words();
    // char *wordQuotient(unsigned int div);
    // char *wordQuotient(unsigned long int div);
    // char *wordQuotient(unsigned long long int div);
    const char *div1();
    const char *div1(const int remainder);
    const char *div10();
    const char *div100();
};

#endif
