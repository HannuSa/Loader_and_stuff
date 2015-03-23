#pragma once

#include "GameObject.h"
#include "RenderComponent.h"

class RenderSystem
{
public:
	RenderSystem();
	~RenderSystem();
	void Draw(GameObject *_object);
	void Update();
};

