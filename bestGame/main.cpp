#include <SFML/Graphics.hpp>

using namespace sf;

RenderWindow    window;
CircleShape     circle(70);
RectangleShape  rectangle(Vector2f(150, 50));
Image			image;
Texture			texture;
Sprite			sprite;

int main()
{
	window.create(VideoMode(640, 480), "Game");
	
	circle.setFillColor(Color::Magenta);
	circle.setPosition(200,200);

	rectangle.setFillColor(Color::Blue);
	rectangle.setPosition(100, 100);
    
	image.loadFromFile("image.png");

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
		}
		window.clear();
		window.draw(circle);
		window.draw(rectangle);
		window.display();
	}
	return 0;
}