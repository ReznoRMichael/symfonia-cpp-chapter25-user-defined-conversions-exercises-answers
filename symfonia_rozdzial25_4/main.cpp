#include <iostream>
#include "ZbaseClass.h"

void testFunction( ZbaseClass Zobject )
{
    //
}

using namespace std;

int main()
{
    ZbaseClass Zobject1 = static_cast<ZbaseClass>( 1.1 );
    ZbaseClass Zobject2( 1.2 );
    ZbaseClass Zobject3 = ZbaseClass( 1.3 );
    ZbaseClass Zobject4 = 1.4;
    ZbaseClass Zobject5 = (ZbaseClass) 1.5;
    ZbaseClass Zobject6;

    testFunction( static_cast<ZbaseClass>( 2.1 ) );
    testFunction( (ZbaseClass)(2.2 + 3) );
    testFunction( 2.3 );

    return 0;
}
