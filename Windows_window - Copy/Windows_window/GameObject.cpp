#include "GameObject.h"


GameObject::GameObject()
{
}


GameObject::~GameObject()
{
}

Component* GameObject::getComponent()
{
	std::unordered_map<const std::type_info*, Component>::iterator it;

	const std::type_info *t;

	it = _components.find(t);
	return &(it->second);
}