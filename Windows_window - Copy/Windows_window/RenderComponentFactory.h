#pragma once
#include "RenderComponent.h"
class RenderComponentFactory
{
public:
	RenderComponentFactory();
	~RenderComponentFactory();
	RenderComponent* CreateRenderComponent();
	unsigned int Width, Height;
	std::vector<unsigned char> ImageData;
};

