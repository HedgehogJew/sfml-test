#include <SFML/Graphics.hpp>

#include "geometry.cpp"
#include "const.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(windowSizeX, windowSizeY), "Two dots field");
    sf::CircleShape r1(10);
    //r1.setFillColor(sf::Color::Green);

    //r1.setPosition(coordComp(-200,200));

    
    sf::CircleShape dot (3);
    dot.setFillColor(sf::Color::White);


 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

           for(int i = -300; i < 300; i++)
    {
        for(int j = -300; j < 300; j++)
        {
            if((abs(i) < 100) && (abs(j) < 100))
            {
                dot.setPosition(coordComp(i,j));
                window.draw(r1);
            }
        }

    }


        window.clear();
     //   window.draw(r1);
        window.display();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){window.close();}
        
        
    }

    return 0;
}