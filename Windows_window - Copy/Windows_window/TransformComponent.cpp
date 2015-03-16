#include "TransformComponent.h"


TransformComponent::TransformComponent() :Component()
{
	position = Vector(0, 0);
}

TransformComponent::TransformComponent(Vector pos) : Component()
{
	position = pos;
}


TransformComponent::~TransformComponent()
{
}

void TransformComponent::Update()
{
	position.x++;
}