//
// Created by Taner Gunes on 11/04/16.
//

#pragma once

#include <iostream>

using namespace std;

int find_min_number(int *x, int y)
{
    int z = *x;
    for (int i = 0; i < y; ++i)
    {
        if (z > *(x+i))
        {
            z = *(x+i);
        }

    }
    return z;
}

long factorial(int x)
{
    long fact = 1;
    for (long i = 1; i <= x; ++i)
    {

        fact = fact * i;
    }
    return fact;
}

int recursive_factorial(int x) {
    if (x == 0 || x == 1)
    {
        return 1;
    }
    return x * recursive_factorial(x-1);
}

int power(int x, int c)
{
    int y = x;
    if (c == 0 )
    {
        return 1;
    }
    for (int i = 1; i < c ; ++i)
    {
        x = x * y;
    }
    return x;
}

bool check_armstrong(int x)
{
    int counter = 0, v = x, y = x, acc = 0, number = 0;
    while (v != 0)
    {
        v = v / 10;
        counter = counter + 1;
    }
    while (x != 0)
    {
        acc = power(x % 10, counter);
        number = number + acc;
        x = x / 10;
    }
    return y == number;
}

void print_armstrong_in_range(int x, int y)
{
    for (;x <= y; ++x)
    {
        if (check_armstrong(x))
        {
            cout<<x<<" is armstrong number !"<<endl;
        }
    }
}