#pragma once

#include <typeinfo>
#include <unordered_map>

#include "Component.h"

class GameObject
{
public:
	GameObject();
	~GameObject();

	void addComponent(Component* _component);

	template<typename T> 
	T* getComponent();

private:

	using ComponentMap = std::unordered_map<const std::type_info*, Component*>;

	ComponentMap _components;
};

template<typename T> 
T* GameObject::getComponent()
{
	ComponentMap::const_iterator position = _components.find(&typeid(T));

	if (position == _components.end())
	{
		return nullptr;
	}
	else
		return static_cast<T*>(position->second);
}