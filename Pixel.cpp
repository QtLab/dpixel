#include "Pixel.h"

Pixel::Pixel() :
    red( 0 ),
    green( 255 ),
    blue( 0 )
{
}


Pixel::Pixel( unsigned int r, unsigned int g, unsigned int b ) :
    red( r ),
    green( g ),
    blue( b )
{
}


Pixel::Pixel( const Pixel& pixel ) :
    red( pixel.red ),
    green( pixel.green ),
    blue( pixel.blue )
{
}


Pixel::~Pixel()
{
}


bool Pixel::operator==( const Pixel& p ) const
{
    if( ( p.red == red ) &&
        ( p.green == green ) &&
        ( p.blue == blue ) )
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool Pixel::operator!=( const Pixel& p ) const
{
    if( ( p.red == red ) &&
        ( p.green == green ) &&
        ( p.blue == blue ) )
    {
        return false;
    }
    else
    {
        return true;
    }
}


