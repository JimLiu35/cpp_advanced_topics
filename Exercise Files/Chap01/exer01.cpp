#include "exer01.h"


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
        div10();

        break;

    default:
        break;
    }

    // std::cout << "The last divider is " << dividers[18] << std::endl;
}

void Integer::div1(const int remainder)
{
    unsigned long long int quotient = remainder / 1;
    char tempdiv1[10];
    // char * tempdiv1 = new char[10];
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

}


void Integer::div1()
{
    std::cout << "I am in here!\n";
    unsigned long long int quotient = n / 1;
    // char *tempdiv1;
    char tempdiv1[10];
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

}

void Integer::div10()
{
    // char *pt_temp;
    char pt_temp[20];
    const char *pt_output;
    int quotient = n / 10;
    int remainder = n % 10;
    if (quotient == 9)
    {
        if (n % 10 == 0)
            printf("ninety");
        else
        {
            // pt_temp = div1();
            printf("ninety-");
            div1(remainder);
        }
    }
    else if (quotient == 8)
    {
        if (n % 10 == 0)
            printf("eighty");
        else
        {
            printf("eighty-");
            div1(remainder);
        }
    }
    else if (quotient == 7)
    {
        if (n % 10 == 0)
            printf("seventy");
        else
        {
            printf("seventy-");
            div1(remainder);
        }
    }
    else if (quotient == 6)
    {
        if (n % 10 == 0)
            printf("sixty");
        else
        {
            printf("sixty-");
            div1(remainder);
        }
    }
    else if (quotient == 5)
    {
        if (n % 10 == 0)
            printf("fifty");
        else
        {
            printf("fifty-");
            div1(remainder);
        }
    }
    else if (quotient == 4)
    {
        if (n % 10 == 0)
            printf("forty");
        else
        {
            printf("forty-");
            div1(remainder);
        }
    }
    else if (quotient == 3)
    {
        if (n % 10 == 0)
            printf("thirty");
        else
        {
            printf("thirty-");
            strcat(pt_temp, div1(remainder));
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
            pt_div1 = div1(remainder);
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
        // strcpy(pt_temp, div1(remainder));
        div1(remainder);
    }

    pt_output = pt_temp;
}

void Integer::div100()
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
}