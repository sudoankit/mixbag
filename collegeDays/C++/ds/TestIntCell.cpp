#include <iostream>
#include "IntCell.h"
using namespace std;
IntCell::IntCell( int initialValue ) {

 storedValue = initialValue; 
}
int IntCell::read( ) const
{
return storedValue;
}

void IntCell::write( int x )
{
storedValue = x;
}

int main( )
{
IntCell m;
m.write( 5 );
cout << "Cell contents: " << m.read( ) << endl;
return 0;
}
