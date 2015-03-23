#include <cassert>
#include "RenderComponentFactory.h"
#include "lodepng.h"

RenderComponentFactory::RenderComponentFactory()
{
}


RenderComponentFactory::~RenderComponentFactory()
{
}

RenderComponent* RenderComponentFactory::CreateRenderComponent()
{
	unsigned error = lodepng::decode(ImageData, Width, Height, "Dude.png");
	assert(error == 0);

	RenderComponent *result = new RenderComponent();
	result->height = Height;
	result->width = Width; 
	result->imageData = ImageData;
	return result;
}