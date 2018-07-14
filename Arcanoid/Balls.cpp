#include "stdafx.h"
#include "Balls.h"


Balls::Balls(float t_X, float t_Y)
{
	shape.setPosition(t_X, t_Y);
	shape.setRadius(this->ballsRadius);
	shape.setFillColor(Color::Red);
	shape.setOrigin(this->ballsRadius, this->ballsRadius);
}
void Balls::draw(RenderTarget& target, RenderStates state) const
{
	target.draw(this->shape, state);
}

void Balls::update()
{
	shape.move(this->velocity);

	if (this->left() < 0)
	{
		velocity.x = ballsVelocity;
	}
	else if (this->right() > 800)
	{
		velocity.x = -ballsVelocity;
	}

if (this->top() < 0)
{
	velocity.y = ballsVelocity;
}
else if (this->bottom() > 600)
{
	velocity.y = -ballsVelocity;
}
}

float Balls::left()
{
	return this->shape.getPosition().x - shape.getRadius();
}

float Balls::right()
{
	return this->shape.getPosition().x + shape.getRadius();
}

float Balls::top()
{
	return this->shape.getPosition().y - shape.getRadius();
}

float Balls::bottom()
{
	return this->shape.getPosition().y + shape.getRadius();
}