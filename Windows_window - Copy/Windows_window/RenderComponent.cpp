#include "RenderComponent.h"
#include <cassert>

RenderComponent::RenderComponent() :Component()
{
	unsigned error = lodepng::decode(imageData, width, height, "Dude.png");
	assert(error == 0);
}


RenderComponent::~RenderComponent()
{
}
