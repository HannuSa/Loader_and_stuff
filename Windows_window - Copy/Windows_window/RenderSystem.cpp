#include "RenderSystem.h"

#include "GL/glew.h"
#include "GL/wglew.h"
#include <gl/GL.h>
#include <gl/GLU.h>

RenderSystem::RenderSystem()
{
}


RenderSystem::~RenderSystem()
{
}

void RenderSystem::Draw(GameObject *_object)
{
	RenderComponent *temp = _object->getComponent<RenderComponent>();

	if (temp != nullptr)
	{

	}
}

void RenderSystem::Update()
{


}