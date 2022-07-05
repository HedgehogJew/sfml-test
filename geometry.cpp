#ifndef __GEOMETRY__

#define __GEOMETRY__

#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <math.h>
#include "const.hpp"




sf::Vector2f coordComp(double x, double y)
{
    return (sf::Vector2f(x + windowSizeX/2,- y + windowSizeY/2));
}


#endif

