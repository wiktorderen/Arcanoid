// Arcanoid.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Balls.h"
using namespace sf;
using namespace std;



int main()
{
	Balls balls(400, 300);
	RenderWindow window{ VideoMode{800,600}, "Arcanoid" };
	window.setFramerateLimit(60);
	Event event;
	while (true) 
	{
		window.clear(Color::Black);
		window.pollEvent(event);

		if (event.type == Event::Closed)
		{
			window.close();
			break;
		}
		balls.update();

		window.draw(balls);
		window.display();

	}

    return 0;
}

