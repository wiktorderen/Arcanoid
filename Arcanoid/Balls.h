#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Balls : public sf::Drawable
{
public:
	Balls(float t_X, float t_Y);
	Balls() = delete;
	~Balls() = default;

	void update();

	float left();
	float right();
	float top();
	float bottom();
private:
	CircleShape shape;
	const float ballsRadius{ 10.0f };
	const float ballsVelocity{ 63.0f };
	Vector2f velocity{ ballsVelocity, ballsVelocity };
	void draw(RenderTarget& target, RenderStates state) const override;
};

