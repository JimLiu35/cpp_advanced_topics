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
    const char *div1(int remainder);
    const char *div10();
    const char *div100();
};

Integer::Integer(const unsigned long long int num)
{
    n = num;
}

Integer::~Integer()
{
}

void Integer::words()
{
    int indicator = 0;
    const char *pt_temp;
    for (int i = 0; i < 5; i++)
    {
        unsigned long long int quotient = n / divider[i];
        // printf("n is %lld.\n", n);
        if (quotient != 0)
        {
            ++indicator;
        }
    }
    switch (indicator)
    {
    case 0:
        // n < 1000
        pt_temp = div100();
        std::cout << "n is " << n << ", " << pt_temp << std::endl;

        break;

    default:
        break;
    }

    // std::cout << "The last divider is " << dividers[18] << std::endl;
}

const char *Integer::div1()
{
    std::cout << "I am in here!\n";
    unsigned long long int quotient = n / 1;
    // char *tempdiv1;
    char * tempdiv1 = new char[10];
    const char *pt_outputdiv1;
    if (quotient == 9)
        strcpy(tempdiv1, "nine");
    else if (quotient == 8)
        strcpy(tempdiv1, "eight");
    else if (quotient == 7)
        strcpy(tempdiv1, "seven");
    else if (quotient == 6)
        strcpy(tempdiv1, "six");
    else if (quotient == 5)
        strcpy(tempdiv1, "five");
    else if (quotient == 4)
        strcpy(tempdiv1, "four");
    else if (quotient == 3)
        strcpy(tempdiv1, "three");
    else if (quotient == 2)
        strcpy(tempdiv1, "two");
    else if (quotient == 1)
        strcpy(tempdiv1, "one");

    pt_outputdiv1 = tempdiv1;
    delete [] tempdiv1;
    std::cout << "pt_outputdiv1 points to " << pt_outputdiv1 << std::endl;
    return pt_outputdiv1;
}

const char *Integer::div10()
{
    // char *pt_temp;
    char * pt_temp = new char[20];
    const char *pt_output;
    int quotient = n / 10;
    if (quotient == 9)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "ninety");
        else
        {
            // pt_temp = div1();
            strcpy(pt_temp, "ninety-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 8)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "eighty");
        else
        {
            strcpy(pt_temp, "eighty-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 7)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "seventy");
        else
        {
            strcpy(pt_temp, "seventy-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 6)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "sixty");
        else
        {
            strcpy(pt_temp, "sixty-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 5)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "fifty");
        else
        {
            strcpy(pt_temp, "fifty-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 4)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "forty");
        else
        {
            strcpy(pt_temp, "forty-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 3)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "thirty");
        else
        {
            strcpy(pt_temp, "thirty-");
            strcat(pt_temp, div1());
        }
    }
    else if (quotient == 2)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "twenty");
        else
        {
            strcpy(pt_temp, "twenty-");
            const char * pt_div1;
            pt_div1 = div1();
            std::cout << "pt_div1 points to " << pt_div1 << std::endl;
            strncat(pt_temp, pt_div1, 20);
            strcat(pt_temp, "()");
        }
    }
    else if (quotient == 1)
    {
        if (n % 10 == 0)
            strcpy(pt_temp, "ten");
        else if (n % 10 == 1)
            strcpy(pt_temp, "eleven");
        else if (n % 10 == 2)
            strcpy(pt_temp, "twelve");
        else if (n % 10 == 3)
            strcpy(pt_temp, "thirteen");
        else if (n % 10 == 4)
            strcpy(pt_temp, "forteen");
        else if (n % 10 == 5)
            strcpy(pt_temp, "fifteen");
        else if (n % 10 == 6)
            strcpy(pt_temp, "sixteen");
        else if (n % 10 == 7)
            strcpy(pt_temp, "seventeen");
        else if (n % 10 == 8)
            strcpy(pt_temp, "eighteen");
        else if (n % 10 == 9)
            strcpy(pt_temp, "nineteen");
    }
    else if (quotient == 0)
    {
        strcpy(pt_temp, div1());
    }

    pt_output = pt_temp;
    delete [] pt_temp;
    return pt_output;
}

const char *Integer::div100()
{
    int quotient = n / 100;
    int remainder = n % 100;
    char *pt_temp = new char[40];
    const char *pt_output;
    printf("Div100(), remainder is %d.\n", remainder);
    if (quotient == 0)
    {
        strcpy(pt_temp, div10());
    }
    if (quotient == 1)
        strcpy(pt_temp, "one hundred");
    if (quotient == 2)
        strcpy(pt_temp, "two hundreds");
    if (quotient == 3)
        strcpy(pt_temp, "three hundreds");
    if (quotient == 4)
        strcpy(pt_temp, "four hundreds");
    if (quotient == 5)
        strcpy(pt_temp, "five hundreds");
    if (quotient == 6)
        strcpy(pt_temp, "six hundreds");
    if (quotient == 7)
        strcpy(pt_temp, "seven hundreds");
    if (quotient == 8)
        strcpy(pt_temp, "eight hundreds");
    if (quotient == 9)
        strcpy(pt_temp, "nine hundreds");

    if (remainder != 0 && quotient != 0)
    {
        std::cout << "Working!" << std::endl;
        strcat(pt_temp, " ");
        strcat(pt_temp, div10());
    }
    pt_output = pt_temp;
    delete [] pt_temp;
    return pt_output;
}

int main()
{
    Integer n = 19;
    n.words();
    // n = 6;
    // n.words();
    n = 21;
    n.words();
    n = 610;
    n.words();

    return 0;
}