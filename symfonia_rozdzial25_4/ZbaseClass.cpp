#include "ZbaseClass.h"
#include <iostream>

using namespace std;

ZbaseClass::ZbaseClass( int i )
: baseInt(i)
{
    //ctor
}

ZbaseClass::ZbaseClass( double other )
: baseInt(other)
{
    cout << "Implicit conversion constructor for: " << other << endl;
}
