#include "IntCell.h"

IntCell::IntCell( int initialValue ) : storedValue{ initialValue }
{}
int IntCell::read( ) const
{
return storedValue;
}
/**
* Store x.
*/
void IntCell::write( int x )
{
storedValue = x;
}
