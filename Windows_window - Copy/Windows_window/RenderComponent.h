#pragma once

#include <string>
#include <vector>
#include "Component.h"
#include "lodepng.h"

class RenderComponent :Component
{
public:
	RenderComponent();
	~RenderComponent();

	unsigned int width, height;
	std::vector<unsigned char> imageData;

};

