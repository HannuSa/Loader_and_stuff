#pragma once

#include "Component.h"
#include "Vector.h"

class TransformComponent :Component
{
public:
	TransformComponent();
	TransformComponent(Vector pos);
	~TransformComponent();
	void Update();

	Vector position;
};