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
    void div1();
    void div1(const int remainder);
    void div10();
    void div10(const int remainder);
    void div100();
    void div100(const int remainder);
};

#endif
