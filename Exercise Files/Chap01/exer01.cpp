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
    for (int i = 0; i < 5; i++)
    {
        unsigned long long int quotient = n / divider[i];
        // printf("n is %lld.\n", n);
        if (quotient != 0)
        {
            ++indicator;
        }
    }
    int c1remainder = 0;
    int c1quotient = 0;
    int c2quotient = 0;
    int c2intermediateremainder = 0;
    int c2remainder = 0;
    printf("n = %lld, ", n);
    switch (indicator)
    {
    case 0:
        // n < 1,000
        div100();
        printf("\n");
        break;

    case 1:
        // 1,000 <= n < 1,000,000
        c1quotient = n / 1000;
        c1remainder = n % 1000;
        // printf("c1quotient is %d.\n", c1quotient);
        // printf("c1remainder is %d.\n", c1remainder);
        div100(c1quotient);
        printf(" thousands ");
        div100(c1remainder);
        printf("\n");

        break;

    case 2: 
        // 1,000,000 <= n < 1,000,000,000
        c2quotient = n / 1000000;
        c2intermediateremainder = n % 1000000 / 1000;
        c2remainder = n % 1000000 % 1000;
        div100(c2quotient);
        printf(" millions ");
        div100(c2intermediateremainder);
        printf(" thousands ");
        div100(c2remainder);
        printf("\n");
        break;
    default:
        break;
    }

    // std::cout << "The last divider is " << dividers[18] << std::endl;
}

void Integer::div1(const int remainder)
{
    unsigned long long int quotient = remainder / 1;
    if (quotient == 9)
        printf("nine");
    else if (quotient == 8)
        printf("eight");
    else if (quotient == 7)
        printf("seven");
    else if (quotient == 6)
        printf("six");
    else if (quotient == 5)
        printf("five");
    else if (quotient == 4)
        printf("four");
    else if (quotient == 3)
        printf("three");
    else if (quotient == 2)
        printf("two");
    else if (quotient == 1)
        printf("one");
}

void Integer::div1()
{
    unsigned long long int quotient = n / 1;
    if (quotient == 9)
        printf("nine");
    else if (quotient == 8)
        printf("eight");
    else if (quotient == 7)
        printf("seven");
    else if (quotient == 6)
        printf("six");
    else if (quotient == 5)
        printf("five");
    else if (quotient == 4)
        printf("four");
    else if (quotient == 3)
        printf("three");
    else if (quotient == 2)
        printf("two");
    else if (quotient == 1)
        printf("one");
}

void Integer::div10()
{
    int quotient = n / 10;
    int remainder = n % 10;
    if (quotient == 9)
    {
        if (n % 10 == 0)
            printf("ninety");
        else
        {
            // = div1();
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
            div1(remainder);
        }
    }
    else if (quotient == 2)
    {
        if (n % 10 == 0)
            printf("twenty");
        else
        {
            printf("twenty-");
            div1(remainder);
        }
    }
    else if (quotient == 1)
    {
        if (n % 10 == 0)
            printf("ten");
        else if (n % 10 == 1)
            printf("eleven");
        else if (n % 10 == 2)
            printf("twelve");
        else if (n % 10 == 3)
            printf("thirteen");
        else if (n % 10 == 4)
            printf("forteen");
        else if (n % 10 == 5)
            printf("fifteen");
        else if (n % 10 == 6)
            printf("sixteen");
        else if (n % 10 == 7)
            printf("seventeen");
        else if (n % 10 == 8)
            printf("eighteen");
        else if (n % 10 == 9)
            printf("nineteen");
    }
    else if (quotient == 0)
    {
        // printf( div1(remainder));
        div1(remainder);
    }
}

void Integer::div10(const int remainder)
{
    int quotient = remainder / 10;
    int div10remainder = remainder % 10;
    // printf("quotient in div10 is %d.\n", quotient);
    // printf("remainder in div10 is %d.\n", div10remainder);

    if (quotient == 9)
    {
        if (n % 10 == 0)
            printf("ninety");
        else
        {
            // = div1();
            printf("ninety-");
            div1(div10remainder);
        }
    }
    else if (quotient == 8)
    {
        if (n % 10 == 0)
            printf("eighty");
        else
        {
            printf("eighty-");
            div1(div10remainder);
        }
    }
    else if (quotient == 7)
    {
        if (n % 10 == 0)
            printf("seventy");
        else
        {
            printf("seventy-");
            div1(div10remainder);
        }
    }
    else if (quotient == 6)
    {
        if (n % 10 == 0)
            printf("sixty");
        else
        {
            printf("sixty-");
            div1(div10remainder);
        }
    }
    else if (quotient == 5)
    {
        if (n % 10 == 0)
            printf("fifty");
        else
        {
            printf("fifty-");
            div1(div10remainder);
        }
    }
    else if (quotient == 4)
    {
        if (n % 10 == 0)
            printf("forty");
        else
        {
            printf("forty-");
            div1(div10remainder);
        }
    }
    else if (quotient == 3)
    {
        if (n % 10 == 0)
            printf("thirty");
        else
        {
            printf("thirty-");
            div1(div10remainder);
        }
    }
    else if (quotient == 2)
    {
        if (n % 10 == 0)
            printf("twenty");
        else
        {
            printf("twenty-");
            div1(div10remainder);
        }
    }
    else if (quotient == 1)
    {
        if (div10remainder == 0)
            printf("ten");
        else if (div10remainder == 1)
            printf("eleven");
        else if (div10remainder == 2)
            printf("twelve");
        else if (div10remainder == 3)
            printf("thirteen");
        else if (div10remainder == 4)
            printf("forteen");
        else if (div10remainder == 5)
            printf("fifteen");
        else if (div10remainder == 6)
            printf("sixteen");
        else if (div10remainder == 7)
            printf("seventeen");
        else if (div10remainder == 8)
            printf("eighteen");
        else if (div10remainder == 9)
            printf("nineteen");
    }
    else if (quotient == 0)
    {
        // printf( div1(remainder));
        div1(div10remainder);
    }
}

void Integer::div100()
{
    int quotient = n / 100;
    int remainder = n % 100;
    if (quotient == 0)
    {
        div10();
    }
    if (quotient == 1)
        printf("one hundred ");
    if (quotient == 2)
        printf("two hundreds ");
    if (quotient == 3)
        printf("three hundreds ");
    if (quotient == 4)
        printf("four hundreds ");
    if (quotient == 5)
        printf("five hundreds ");
    if (quotient == 6)
        printf("six hundreds ");
    if (quotient == 7)
        printf("seven hundreds ");
    if (quotient == 8)
        printf("eight hundreds ");
    if (quotient == 9)
        printf("nine hundreds ");

    if (remainder != 0 && quotient != 0)
    {
        div10(remainder);
    }
}

void Integer::div100(const int remainder)
{
    int div100quotient = remainder / 100;
    int div100remainder = remainder % 100;
    if (div100quotient == 0)
    {
        // std::cout << "I'm here!\n";
        // std::cout << "div100remainder in div100 is " << div100remainder << std::endl;
        div10(div100remainder);
    }
    if (div100quotient == 1)
        printf("one hundred ");
    if (div100quotient == 2)
        printf("two hundreds ");
    if (div100quotient == 3)
        printf("three hundreds ");
    if (div100quotient == 4)
        printf("four hundreds ");
    if (div100quotient == 5)
        printf("five hundreds ");
    if (div100quotient == 6)
        printf("six hundreds ");
    if (div100quotient == 7)
        printf("seven hundreds ");
    if (div100quotient == 8)
        printf("eight hundreds ");
    if (div100quotient == 9)
        printf("nine hundreds ");

    if (div100remainder != 0 && div100quotient != 0)
    {
        div10(div100remainder);
    }
}