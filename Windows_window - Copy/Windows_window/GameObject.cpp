#include "GameObject.h"


GameObject::GameObject()
{
}


GameObject::~GameObject()
{
}

void GameObject::addComponent(Component* _component)
{
	_components.insert(std::make_pair(&typeid(*_component), _component));
}
