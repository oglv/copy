#pragma once
#include <iostream>

using std::cout;
using std::endl;

void copy(int x)
{
    if(x == 1)
    {
        cout << u8"Copying" << endl;
    }
    if(x == 2)
    {
        cout << u8"Complete" << endl;
    }
}